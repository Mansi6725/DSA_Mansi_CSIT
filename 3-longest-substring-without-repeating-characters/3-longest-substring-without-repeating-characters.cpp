class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       set<char> st;
        int i=0,j=0,n=s.size(),maxi=0;
        while(j<n){
            if(st.find(s[j])!=st.end()){
                // maxi=max(maxi,st.size());
                if(maxi<st.size())
                    maxi=st.size();
                st.erase(s[i]);
                i++;
            }
            else{
                st.insert(s[j]);
                j++;
                
            }
        }
        // maxi=max(maxi,st.size());
         if(maxi<st.size())
                    maxi=st.size();
        return maxi;
    }
};