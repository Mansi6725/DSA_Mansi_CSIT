class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int> mp;
        int i=0,j=0;
        int cnt=0;
        
        while(j<s.size()){
            mp[s[j]]++;
            while(mp['a']&&mp['b']&&mp['c']){
                cnt=cnt+1+s.size()-1-j;
                mp[s[i]]--;
                i++;
               
                
            }
             j++;
        }
        return cnt;
        
    }
};