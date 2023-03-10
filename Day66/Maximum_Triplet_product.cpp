//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
      // Complete the function
      long long firstmax=LONG_MIN;
      long long secondmax=LONG_MIN;
      long long thirdmax=LONG_MIN;

      long long firstmin=LONG_MAX;
      long long secondmin=LONG_MAX;

      for(int i=0;i<n; i++)
      {
          if(arr[i]>=firstmax)
          {
              thirdmax=secondmax;
              secondmax=firstmax;
              firstmax=arr[i];

          }
          else if(arr[i]>=secondmax)
          {
              thirdmax=secondmax;
              secondmax=arr[i];
          }
          else if(arr[i]>=thirdmax)
          {
              thirdmax=arr[i];
          }


          if(arr[i]<=firstmin)
          {
              secondmin=firstmin;
              firstmin=arr[i];
          }
          else if(arr[i]<=secondmin)
          {
              secondmin=arr[i];
          }

      }


      return max(firstmax*secondmax*thirdmax, firstmin*secondmin*firstmax);
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends
