//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      vector<int>row(n,0);
      vector<int>col(n,0);
      int row_count=0;
      int col_count=0;
      vector<long long int>ans;
      
      for(int i=0;i<k; i++)
      {
          int r=arr[i][0]-1;
          int c=arr[i][1]-1;
          
          if(row[r]==0)
          {
              row[r]=1;
              row_count++;
          }
          if(col[c]==0)
          {
              col[c]=1;
              col_count++;
          }
          
          ans.push_back(n*n - (row_count*n) - (col_count*n) + (row_count*col_count));
      }
      
      return ans;
  }
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends
