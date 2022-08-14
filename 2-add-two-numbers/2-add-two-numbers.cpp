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
    ListNode* addTwoNumbers(ListNode* t1, ListNode* t2) {
        if(t1==NULL)
            return t2;
        if(t2==NULL)
            return t1;
        if(t1==NULL&& t2==NULL)
            return NULL;
       
        int c=0;
        ListNode* head=NULL;
        ListNode* temp=NULL;
        while(t1!=NULL && t2!=NULL){
            int v=t1->val+t2->val+c;
            c=v/10;
            v%=10;
            ListNode* n=new ListNode(v);
            if(head==NULL){
                head=n;
                temp=head;
            }
            else{
                temp->next=n;
                temp=n;
            }
            t1=t1->next;
            t2=t2->next;
        }
        while(t1!=NULL){
            int v=t1->val+c;
            c=v/10;
            v%=10;
            ListNode* n=new ListNode(v);
            temp->next=n;
            temp=temp->next;
            t1=t1->next;
        }
        while(t2!=NULL){
            int v=t2->val+c;
            c=v/10;
            v%=10;
            ListNode* n=new ListNode(v);
            temp->next=n;
            temp=temp->next;
            t2=t2->next;
        }
        if(c!=0){
            ListNode* n=new ListNode(c);
            temp->next=n;
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
        
        
           
    }
};
