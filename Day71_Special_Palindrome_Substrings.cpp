//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
    //Complete the function and return minimum number of operations
    public:
    int specialPalindrome(string s1, string s2){
        //Code Here
        int l1=s1.length();
        int l2=s2.length();
        int ans=INT_MAX;
        for(int i=0;i<=l1-l2; i++)
        {
            string temp=s1.substr(0,i)+s2+s1.substr(i+l2);

            int cost=0;
            for(int j=i; j<i+l2; j++)
            {
                if(s1[j]!=temp[j])
                {
                    cost++;
                }
            }
            bool flag=false;
            for(int j=0; j<l1/2; j++)
            {
                if((j<i or j>=i+l2) and temp[j]!=temp[l1-j-1])
                {
                    cost++;
                }
                else if((l1-j-1)>=i+l2 and temp[j]!=temp[l1-j-1])
                {
                    cost++;
                }
                else if(temp[j]!=temp[l1-j-1])
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            {
                ans=min(ans,cost);
            }

        }

        if(ans==INT_MAX)return -1;


        return ans;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        Solution obj;
        int ans = obj.specialPalindrome(s1,s2);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends
