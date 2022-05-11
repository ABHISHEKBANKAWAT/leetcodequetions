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
    ListNode* removeElements(ListNode* head, int T) {
        ListNode *dummy = new ListNode(-1, head), *prev = dummy;
        while(prev!=NULL && prev->next!=NULL){
            if(prev->next->val == T) 
                prev->next = prev->next->next;                       // just update prev node
            else                                   // current node needs to be deleted
				prev =prev->next;       // just update next of prev to next of current so that current node is removed from list
    }
        return dummy -> next;                     
    }

    //     if(head==NULL)return NULL;
    //     head->next = removeElements(head->next,val);
    //     if(head->val == val){
    //         ListNode * ans = head->next;
    //         delete head;
    //         return ans;
    //     }
    //     else{
    //         return head;
    //     }
    // }
};