class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ans=0;
        int n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n&&chars[i]==chars[j]){
                j++;
            }
            chars[ans++]=chars[i];
            int cnt=j-i;
            if(cnt>1){
            string s=to_string(cnt);
            for(char ch:s){
                chars[ans++]=ch;
            }
            }
            i=j;
        }
        return ans;
//         vector<char> t;
//         int cnt;
//         char c=chars[0];
//         for(int i=1;i<chars.size();i++){
//             cnt=1;
//             while(i<chars.size()){
//                 if(c==chars[i])
//                     cnt++;
//                 else{
//                      break;
//                 }
                   
//                 i++;
                
//                 }
//             if(cnt==1)
//                 t.push_back(c);
//             else{
//                 t.push_back(c);
//                 t.push_back(cnt);
//             }
//             c=chars[i];
//             }
//         return t.size();
//         }
    }
        
    
};