//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        //code here
        pair<int,int>ans;
        int i=0,j=0;
        char temp='r';
        while(i<matrix.size() and j<matrix[0].size() and i>=0 and j>=0){
           ans={i,j};
            if(matrix[i][j]==0){
                if(temp=='r')j++;
                else if(temp=='l')j--;
                else if(temp=='u')i--;
                else i++;
            }else{
                matrix[i][j]=0;
                if(temp=='r'){
                    i++;
                    temp='d';
                }else if(temp=='l'){
                    temp='u';
                    i--;
                }else if(temp=='u'){
                    j++;
                    temp='r';
                }else{
                    j--;
                    temp='l';
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends
