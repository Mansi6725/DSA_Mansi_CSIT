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
    int length(ListNode* head){
        int c=0;
        while(head!=NULL){
            head=head->next;
            c++;
        }
        return c;
    }
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
            return head;
        if(head->next==NULL){
             head=NULL;
             return head;
        }
           
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        int mid=length(head)/2;
        while(mid--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        return head;
    }
};