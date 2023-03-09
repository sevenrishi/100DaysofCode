//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n; // length of link list
    scanf("%d ", &n);

    char data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution {
  public:
  bool checkAnagram(vector<int>freq,vector<int>temp_freq)
  {
      for(int i=0;i<26; i++)
      {
          if(freq[i]!=temp_freq[i])
          {
              return false;
          }
      }

      return true;
  }

  void actionForAnagrams(Node* &ptr1, Node* &ptr2, int len, vector<Node*>&ans, vector<int>&temp_freq)
  {
      ans.push_back(ptr1);
      Node* temp=ptr2;
      ptr2=ptr2->next;
      ptr1=ptr2;
      temp->next=NULL;

      for(int i=0;i<26; i++)temp_freq[i]=0;

      Node* prev=NULL;
        for(int i=0;i<len && ptr2; i++)
        {
            temp_freq[ptr2->data-'a']++;
            prev=ptr2;
            ptr2=ptr2->next;

        }

        ptr2=prev;


  }
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
        vector<int>freq(26,0);

        int len=s.size();
        for(int i=0;i<len; i++)
        {
            freq[s[i]-'a']++;
        }

        Node* ptr1=head;
        Node* ptr2=head;

        Node* prev=NULL;
        vector<int>temp_freq(26,0);
        for(int i=0;i<len && ptr2; i++)
        {
            temp_freq[ptr2->data-'a']++;
            prev=ptr2;
            ptr2=ptr2->next;

        }

        ptr2=prev;

        vector<Node*>ans;

        while(ptr2->next!=NULL)
        {
            bool check=checkAnagram(freq,temp_freq);
            if(check)
            {

                actionForAnagrams(ptr1,ptr2,len,ans,temp_freq);
            }
            else
            {
                temp_freq[ptr1->data-'a']--;
                ptr1=ptr1->next;
                ptr2=ptr2->next;
                temp_freq[ptr2->data-'a']++;
            }
        }

        bool check=checkAnagram(freq,temp_freq);

        if(check)
        {
            ans.push_back(ptr1);
        }

        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        struct Node *head = inputList();

        string s;
        cin >> s;

        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);

        for (int i = 0; i < res.size(); i++) {
            printList(res[i]);
        }

        if (res.size() == 0) cout << "-1\n";
    }
}

// } Driver Code Ends
