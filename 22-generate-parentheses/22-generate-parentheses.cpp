class Solution {
private:
    bool validate(int op,int cl){
        if(cl!=op)
            return false;
        return true;
//         stack<int> st;
//         for(int i=0;i<s.length();i++){
//             if(!st.empty()&&(s[i]==')'&&st.top()=='('))
//                 st.pop();
//             else
//                 st.push(s[i]);
//         }
        
//         return st.empty();
        
        
    }
private:
    void solve(int n,string temp,vector<string>&ans,int cntop,int cntcl){
        if(n==1){
            if(validate(cntop,cntcl))
                ans.push_back(temp);
            // cout<<cntop<<" "<<cntcl<<endl;
            cout<<temp<<endl;
            return;
        }
        temp.push_back('(');
        cntop++;
        solve(n-1,temp,ans,cntop,cntcl);
        temp.pop_back();
        cntop--;
        temp.push_back(')');
        cntcl++;
        if(cntcl>cntop)
            return;
        solve(n-1,temp,ans,cntop,cntcl);
        temp.pop_back();
        cntcl--;
        
    }
public:
    vector<string> generateParenthesis(int n) {
        string temp="(";
        vector<string> ans;
        solve(n*2,temp,ans,1,0);
        return ans;
    }
};