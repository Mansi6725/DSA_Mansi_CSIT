class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        if(nums.size()==1)
            return {0,1};
        map<int,int> mp;
        int cnt=0;
        int remain=0;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp){
            if(!(i.second&1)){
                cnt+=i.second/2;
            }
            else{
                cnt+=i.second/2;
                remain++;
            }
                
        }
        return {cnt,remain};
    }
};