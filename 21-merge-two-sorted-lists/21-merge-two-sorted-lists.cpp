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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1==NULL&&l2==NULL)
            return NULL;
        ListNode* head=NULL;
        ListNode* temp=NULL;
        if(l1->val<=l2->val){
             head=l1;
             l1=l1->next;
             temp=head;
        }
           
        else{
             head=l2;
             l2=l2->next;
             temp=head;
        }
           
        while(l1!=NULL&&l2!=NULL){
            if(l1->val<=l2->val){
                temp->next=l1;
                temp=temp->next;
                l1=l1->next;
            }
            else{
                 temp->next=l2;
                temp=temp->next;
                l2=l2->next;
            }
                
        }
        while(l1!=NULL){
             temp->next=l1;
                temp=temp->next;
                l1=l1->next;
        }
        while(l2!=NULL){
             temp->next=l2;
                temp=temp->next;
                l2=l2->next;
        }
        return head;
    }
};