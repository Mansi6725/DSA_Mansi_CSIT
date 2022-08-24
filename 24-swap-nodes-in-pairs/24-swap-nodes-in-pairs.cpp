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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode* curr=head;
        ListNode* prev=new ListNode(-1);
        while(curr!=NULL&&curr->next!=NULL){
            prev->next=curr->next;
            curr->next=curr->next->next;
            prev->next->next=curr;
            if(curr==head)
                head=prev->next;
            prev=curr;
            curr=curr->next;
        }
        return head;
        
    }
};