//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        int i, j;
        i = j = 0;
        
        while(i < S.size() and j < T.size()){
            if(isdigit(T[j])){
                int x = j + 1;
                while(x < T.size() and isdigit(T[x])) ++x;
                int size = x - j;
                
                string t = T.substr(j, size);
                int jump = stoi(t);
                
                i += jump;
                j = x;
                
                continue;
            }
            else if(S[i] != T[j])
                return 0;
                
            ++i;
            ++j;
        }
        
        return (i == S.size() ? 1 : 0);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends
