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
private:
    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* f=NULL;
        ListNode* p=NULL;
        while(curr!=NULL){
            f=curr->next;
            curr->next=p;
            p=curr;
            curr=f;
        }
        return p;
    }
    ListNode* middle(ListNode* head){
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
public:
    void reorderList(ListNode* head) {
        ListNode* mid=middle(head);
        ListNode* revaftermid=reverse(mid->next);
        mid->next=NULL;
        ListNode* curr=head;
        while(revaftermid!=NULL){
            ListNode* x=curr->next;
            ListNode* y=revaftermid->next;
            curr->next=revaftermid;
            revaftermid->next=x;
            curr=x;
            revaftermid=y;
            
        }
    }
};