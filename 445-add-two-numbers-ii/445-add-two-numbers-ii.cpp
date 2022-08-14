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
        ListNode* prev=NULL;
        ListNode* curr=head;
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1==NULL&& l2==NULL)
            return NULL;
        ListNode* t1=reverse(l1);
        ListNode* t2=reverse(l2);
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
        head=reverse(head);
        return head;
        
        
           
    }
};