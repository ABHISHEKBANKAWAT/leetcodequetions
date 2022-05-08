/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reverse(ListNode*start,ListNode *end){
        ListNode* curr = start,*prev = NULL , *temp = start->next;
        while(prev!=end){
            curr->next = prev;
            prev = curr;
            curr = temp;
            if(temp!=NULL) temp = temp->next;
            
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL||k==1){return head;
        }
        ListNode * start = head , *end = head;
        int inc = k-1;
        while(inc--){
            end = end->next;
            if(end==NULL) return head;
        }
         ListNode* nextHead = reverseKGroup(end->next,k);
        reverse(start,end);
       
        start->next = nextHead;
        return end;
    }
};