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
public:
    bool isPalindrome(ListNode* head) {
        ListNode* head2=NULL;
        ListNode* curr=head;
        ListNode* temp=NULL;
        while(curr!=NULL){
            ListNode* n=new ListNode(curr->val);
            if(head2==NULL){
                head2=n;
                temp=head2;
            }
            else{
                temp->next=n;
                temp=temp->next;
            }
            curr=curr->next;
        }
        temp->next=NULL;
        ListNode* rev=reverse(head2);
        curr=head;
        ListNode* curr2=rev;
        while(curr!=NULL){
            if(curr->val!=curr2->val){
                return false;
            }
            curr=curr->next;
            curr2=curr2->next;
        }
        return true;
        
        
    }
};