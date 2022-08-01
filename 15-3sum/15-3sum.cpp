class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)
            return {};
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i==0||nums[i]!=nums[i-1])
            {
            int st=i+1;
            int en=nums.size()-1;
            while(st<en){
                int sum=nums[i]+nums[st]+nums[en];
                if(sum==0){
                    ans.push_back({nums[i],nums[st],nums[en]});
                    while(st<en&&nums[st]==nums[st+1])
                        st++;
                    while(st<en&&nums[en]==nums[en-1])
                        en--;
                    st++;
                    en--;
                }
                else if(sum>0)
                    en--;
                else
                    st++;
            }
            }
        }
        return ans;
    }
};