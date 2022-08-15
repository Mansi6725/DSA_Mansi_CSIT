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
        ListNode* prev=NULL;
        ListNode* f=NULL;
        while(curr!=NULL){
            f=curr->next;
            curr->next=prev;
            prev=curr;
            curr=f;
        }
        return prev;
    }
    ListNode* middle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
public:
    int pairSum(ListNode* head) {
        ListNode* mid=middle(head);
        ListNode* mid2=mid->next;
        mid->next=NULL;
        ListNode* revmid=reverse(head);
        ListNode* curr=revmid;
        ListNode* curr2=mid2;
        int maxi=0;
        
        while(curr!=NULL){
            maxi=max(maxi,curr->val+curr2->val);
            curr=curr->next;
            curr2=curr2->next;
        }
        return maxi;
    }
};