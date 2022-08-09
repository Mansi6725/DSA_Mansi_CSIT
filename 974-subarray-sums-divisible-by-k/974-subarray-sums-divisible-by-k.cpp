class Solution {

public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> mp;
        int sum=0;
        int c=0;
        mp[0]=1;
       for(int i=0;i<nums.size();i++){
         sum+=nums[i];  
         int rem=sum%k;
         if(rem<0){
             rem=rem+k;
         }
          if(mp.find(rem)!=mp.end()){
              c+=mp[rem];
              mp[rem]++;
          }
           else
               mp[rem]=1;
       }
        return c;
    }
    
};