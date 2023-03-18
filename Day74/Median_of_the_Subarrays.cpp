//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution 
{
  public:
    long long solve(int n, vector<int>& A, int m) {
        
        vector<int> mp(2*n+1, 0);
        long long cur = n, tot = 0, ans = 0;
        mp[cur]++;
        for (int i = 0; i < n; i++) {
            if (A[i] >= m) {
                tot += mp[cur];
                cur += 1;
            }
            else{
                tot -= mp[cur-1];
                cur -= 1;
            }
            ans += tot;
            mp[cur]++;
        }
        return ans;
    }
    
    long long countSubarray(int N, vector<int> A, int M){
        
        return solve(N, A, M) - solve(N, A, M+1);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin>>N>>M;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,M);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends
