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
        ListNode* f=NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            f=curr->next;
            curr->next=prev;
            prev=curr;
            curr=f;
        }
        return prev;
    }
public:
    int getDecimalValue(ListNode* head) {
        ListNode* rev=reverse(head);
        int dec=0,i=0;
        while(rev!=NULL){
            dec=dec+pow(2,i++)*rev->val;
            rev=rev->next;
        }
        return dec;
    }
};