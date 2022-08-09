class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int rev=0;
            while(n>0){
                int rem=n%10;
                rev=rev*10+rem;
                n=n/10;
            }
            nums[i]=nums[i]-rev;
        }
        map<int,long long> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count=0;
        for(auto i:mp){
            if(i.second>1)
                count=(count+(i.second*(i.second-1))/2)%(1000000007);
        }
        return count;
    }
};