// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
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
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
   Node * new1 = head1;
    Node * new2 = head2;
    Node * dummy = new Node(1);
    Node * current = dummy;
    while(new1!=NULL && new2!=NULL)
    {
      if(new1->data < new2->data)
      {
        new1 = new1->next;
      }
      else if(new2->data<new1->data)
      {
        new2 = new2->next;
      }
      else if(new1->data==new2->data)
      {
          Node * newNode = new Node(new1->data);
          current->next = newNode;
          current = current->next;
          new1 = new1->next;
          new2 = new2->next;
      }
    }
    return dummy->next;
}