//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int xmod11(string s)
    {
       int carry=0;
       int i=0;
       while(i<s.size()){
           int n=10*carry+s[i]-'0';
           carry=n%11;
           i++;
       }
       
       return carry;
    }
	
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
