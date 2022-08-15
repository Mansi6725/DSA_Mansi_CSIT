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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr=list1;
        int i=0;
        while(i!=a-1){
            curr=curr->next;
            i++;
        }
        ListNode* break1=curr;
        
        while(i!=b+1&& curr!=NULL){
            curr=curr->next;
            i++;
            
        }
        ListNode* break2=curr;
        // cout<<break2->val;
        break1->next=list2;
        while(list2->next!=NULL){
            list2=list2->next;
        }
        
        list2->next=break2;
        return list1;
    }
};