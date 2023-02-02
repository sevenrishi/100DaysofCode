//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  vector<int>vis;
  vector<int>parent;
  vector<int>temp;
  long long dfs(vector<int>adj[], int node, int par)
  {
      vis[node]=1;
      parent[node]=par;
      temp.push_back(node);
      for(auto child:adj[node])
      {
          if(vis[child]==0)
          {
              long long cycle=dfs(adj,child,node);
              if(cycle!=-1)
              {
                  return cycle;
              }
          }
          else if(vis[child]==1)
          {
              long long sum=child;
              while(node!=child)
              {
                  sum+=node;
                  node=parent[node];
              }
              return sum;
          }
      }
      
      return -1;
  }
  long long largestSumCycle(int N, vector<int> Edge)
  {
    // code here
    vis=vector<int>(N,0);
    parent=vector<int>(N,-1);
    
    vector<int>adj[N];
    
    for(int i=0;i<N; i++)
    {
        if(Edge[i]!=-1)
        {
            adj[i].push_back(Edge[i]);
        }
    }
    long long ans=-1;
    for(int i=0; i<N; i++)
    {
        if(vis[i]==0)
        {
            ans=max(ans,dfs(adj,i,-1));
            for(auto nd:temp)
            {
                vis[nd]=2;
            }
            temp.clear();
        }
    }
    
    return ans;
  }
};



//{ Driver Code Starts.
signed main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      long long ans=obj.largestSumCycle(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends
