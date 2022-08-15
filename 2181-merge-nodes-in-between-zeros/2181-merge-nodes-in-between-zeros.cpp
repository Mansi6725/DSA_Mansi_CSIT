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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr=head->next;
        ListNode* head2=NULL;
        ListNode* temp=NULL;
        int sum=0;
        while(curr!=NULL){
            if(curr->val==0){
                if(sum>0){
                    
                    ListNode* n=new ListNode(sum);
                    if(head2==NULL)
                    {
                        head2=n;
                        temp=head2;
                    }
                    else{
                       
                        temp->next=n;
                        temp=temp->next;
                    }
                   
                    sum=0;
                }
            }
            else{
                sum+=curr->val;
            }
            curr=curr->next;
        }
        if(temp!=NULL)
            temp->next=NULL;
        return head2;
    }
};