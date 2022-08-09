class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        map<int,int> mp;
        // mp[0]=1;
        int c=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int r=sum-k;
            // if(r<0)
            //     r=r+k;
            if(sum==k)
                c++;
            if(mp.find(r)!=mp.end()){
                c+=mp[r];
               
            }
           mp[sum]++;
        }
        return c;
    }
};