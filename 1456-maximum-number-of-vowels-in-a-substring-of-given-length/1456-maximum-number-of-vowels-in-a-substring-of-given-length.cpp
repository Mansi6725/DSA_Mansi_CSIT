class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0,maxi=0,n=s.size(),cnt=0;
        while(j<n){
           
            if(j-i<k){
                 if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                    cnt++;
                j++;
            }
           else {
                maxi=max(maxi,cnt);
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                    cnt--;
               i++;
               
            }
        }
        maxi=max(maxi,cnt);
        return maxi;
    }
};