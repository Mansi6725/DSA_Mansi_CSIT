class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        long long int ans=0;
        if(next_permutation(s.begin(),s.end())){
            
            for(int i=0;i<s.length();i++){
               ans=ans*10+(s[i]-'0');
            }
           if(ans<INT_MIN||ans>INT_MAX)
               return -1;
           else return ans;
        }
      
        return -1;
    }
};



//  while(n>0){
//             rem=n%10;
//             v.push_back(rem);
//             n=n/10;
//         }
//         reverse(v.begin(),v.end());
        