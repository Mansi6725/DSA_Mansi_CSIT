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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        int len=length(head);
        int mid=len/2;
        ListNode* curr=head;
        while(mid--){
            curr=curr->next;
        }
        return curr;
        
    }
};