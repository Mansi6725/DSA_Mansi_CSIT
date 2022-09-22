class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') 
                st.push(-1);
            else{
           
                if(!st.empty()&&st.top()==-1){
                st.pop();
                st.push(1);
                }
                else{
                    int sum=0;
                   while(!st.empty()&&st.top()!=-1){
                       sum+=st.top();
                       st.pop();
                   }
                    st.pop();
                    st.push(2*sum);
                }
            }
        }
        while(!st.empty()){
           
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
