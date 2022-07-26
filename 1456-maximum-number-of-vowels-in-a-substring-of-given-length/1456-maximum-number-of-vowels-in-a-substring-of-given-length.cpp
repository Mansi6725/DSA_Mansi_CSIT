class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0,maxi=0,n=s.size(),cnt=0;
        vector<int> v;
        while(j<n){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                    cnt++;
            if(j-i+1<k){
                
                j++;
            }
           else if(j-i+1==k){
                maxi=max(maxi,cnt);
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                    cnt--;
               i++;
               j++;
            }
        }
        return maxi;
    }
};