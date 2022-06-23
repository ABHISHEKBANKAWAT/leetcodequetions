// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node * reverse(struct Node*head){
        Node *prev=NULL,*curr=head,*next=NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=next;
        }
        return prev;
    }
    int length(struct Node* head){
        int count = 0;
        struct Node* current =head;
        while(current!=NULL){
            count++;
            current = current->next;
        }
        return count;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        
    if(length(first)<length(second)){
    struct Node * temp = first;
    first = second;
    second= temp;
  }
  struct Node * big = reverse(first);
  struct Node * big1 = big;
  struct Node * small = reverse(second);
  struct Node * small1 = small;
  struct Node * prev = NULL;
  int carry = 0;
  while(big1!=NULL or small1!=NULL)
  { int bigdata=0,smalldata=0;
    if(big1==NULL){
      bigdata=0;
    }
    else
    {
      bigdata = big1->data;
    }
    if(small1==NULL)
    {
      smalldata=0;
    }else{
      smalldata=small1->data;
    }
    int sum = bigdata+smalldata+carry;
    carry = sum/10;
    big1->data = sum%10;
    prev = big1;
    big1 = big1->next;
    if(small1!=NULL)
    {
      small1 = small1->next;
    }
  }
  if(carry==1)
  {
   struct Node * newNode = new Node(1);
    prev->next = newNode;
  }
  return reverse(big);
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends