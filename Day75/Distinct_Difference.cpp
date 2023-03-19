//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        unordered_set<int>st;

        vector<int>left(N,0);
        vector<int>right(N,0);
        for(int i=0;i<N; i++)
        {
            left[i]=st.size();
            st.insert(A[i]);
        }

        st.clear();

        for(int i=N-1;i>=0; i--)
        {
            right[i]=st.size();
            st.insert(A[i]);
        }

        vector<int>ans;
        for(int i=0;i<N; i++)
        {
            ans.push_back(left[i]-right[i]);
        }

        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends
