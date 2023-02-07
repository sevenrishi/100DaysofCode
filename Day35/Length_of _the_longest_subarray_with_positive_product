//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        int maxLength(vector<int> &arr,int N){
             int Pos = 0;
 
    // Stores the length of current
    // subarray with negative product
    int Neg = 0;
 
    // Stores the length of the longest
    // subarray with positive product
    int res = 0;
 
    for (int i = 0; i < N; i++) {
 
        if (arr[i] == 0) {
 
            // Reset the value
            Pos = Neg = 0;
        }
 
        // If current element is positive
        else if (arr[i] > 0) {
 
            // Increment the length of
            // subarray with positive product
            Pos += 1;
 
            // If at least one element is
            // present in the subarray with
            // negative product
            if (Neg != 0) {
 
                Neg += 1;
            }
 
            // Update res
            res = max(res, Pos);
        }
 
        // If current element is negative
        else {
 
            swap(Pos, Neg);
 
            // Increment the length of subarray
            // with negative product
            Neg += 1;
 
            // If at least one element is present
            // in the subarray with positive product
            if (Pos != 0) {
 
                Pos += 1;
            }
 
            // Update res
            res = max(res, Pos);
        }
    }
    return res;
           
        }
};


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends
