//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
        long long next_term=0;
        for(int i=0;i<K; i++)
        {
            if(i==N-1)
            {
                return GeekNum[i];
            }
            next_term+=GeekNum[i];
        }
        GeekNum.push_back(next_term);
        
        int i=0;
        int j=K;
        
        while(j!=N)
        {
            next_term-=GeekNum[i];
            next_term+=GeekNum[j];
            GeekNum.push_back(next_term);
            i++;
            j++;
        }
        
        return GeekNum[N-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends
