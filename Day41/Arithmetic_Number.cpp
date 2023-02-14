//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        int d=B-A;
        if(d==0)return true;
        if(d>0)
        {
            if(C<=0)return false;
            if(d%C==0)return true;
            
            return false;
        }
        else
        {
            if(C>=0)return false;
            
            if(d%C==0)return true;
            
            return false;
        }
        
        return true;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}
// } Driver Code Ends
