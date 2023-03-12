//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        //code here
        int i=0;
        int j=N-1;


        int row=0;
        int one_count=0;
        while(j>=0 and i<N)
        {
            if(mat[i][j]==1)
            {
                one_count++;
                row=i;
                j--;
            }
            else
            {
                i++;
            }
        }

        vector<int>ans;
        ans.push_back(row);
        ans.push_back(one_count);

        return ans;
    }
};


//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends
