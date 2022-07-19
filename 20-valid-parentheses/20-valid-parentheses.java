class Solution {
    public boolean isValid(String s) {
        Stack<Character> st=new Stack<Character>();
        int i;
        for(i=0;i<s.length();i++){
            char c=s.charAt(i);
            switch(c){
                case '(':
                case '{':
                case '[':
                    st.push(c);
                    break;
                case ')':
                    if(st.empty())
                       return false;
                    else if(st.peek()!='(')
                        return false;
                    else st.pop();
                    break;
                case '}':
                    if(st.empty())
                       return false;
                    else if(st.peek()!='{')
                        return false;
                    else st.pop();
                    break;
                case ']':
                     if(st.empty())
                       return false;
                    else if(st.peek()!='[')
                        return false;
                    else st.pop();
                    break;
            }
        }
        return  st.empty();
    }
}