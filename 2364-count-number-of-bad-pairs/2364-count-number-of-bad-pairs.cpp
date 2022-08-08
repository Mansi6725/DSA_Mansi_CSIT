class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]-i;
        }
        map<long long,long long> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        long long m=0;
        for(auto i:mp){
            if(i.second>1)
                m+=(i.second*(i.second-1))/2;
            
        }
        long long n=nums.size()*(nums.size()-1)/2;
        return n-m;
    }
};