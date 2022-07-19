class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        map<char,int> m1,m2;
        for(int i=0;i<s1.length();i++)
            m1[s1[i]]++;
        for(int i=0;i<s1.length();i++)
            m2[s2[i]]++;
        int i=0;
        int j=s1.length()-1;
        while(j<s2.length()&&i<s2.length()){
            if(m1==m2)
                return true;
            if(j+1<s2.length())
                m2[s2[j+1]]++;
            if(m2[s2[i]]==1)
                m2.erase(s2[i]);
            else
                m2[s2[i]]--;
            i++;
            j++;
        }
        return false;
    }
};