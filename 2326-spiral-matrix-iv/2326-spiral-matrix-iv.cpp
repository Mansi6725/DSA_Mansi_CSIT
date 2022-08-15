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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,0));
        ListNode* curr=head;
        int total=m*n;
        int cnt=0;
        int rs=0;
        int re=m-1;
        int cs=0;
        int ce=n-1;
        while(cnt<total){
            for(int i=cs;i<=ce&&cnt<total;i++){
                if(curr!=NULL){
                    ans[rs][i]=curr->val;
                    curr=curr->next;
                }
                else
                    ans[rs][i]=-1;
                cnt++;
            }
            rs++;
             for(int i=rs;i<=re&&cnt<total;i++){
                if(curr!=NULL){
                    ans[i][ce]=curr->val;
                    curr=curr->next;
                }
                else
                    ans[i][ce]=-1;
                cnt++;
            }
            ce--;
             for(int i=ce;i>=cs&&cnt<total;i--){
                if(curr!=NULL){
                    ans[re][i]=curr->val;
                    curr=curr->next;
                }
                else
                    ans[re][i]=-1;
                cnt++;
            }
            re--;
            for(int i=re;i>=rs&&cnt<total;i--){
                if(curr!=NULL){
                    ans[i][cs]=curr->val;
                    curr=curr->next;
                }
                else
                    ans[i][cs]=-1;
                cnt++;
            }
            cs++;
        }
        return ans;
    }
};