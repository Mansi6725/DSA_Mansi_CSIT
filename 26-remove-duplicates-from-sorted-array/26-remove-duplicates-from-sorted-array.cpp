class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0,i;
        for( i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1])
                nums[j++]=nums[i];
            
        }
        nums[j++]=nums[i];
        return j;
    }
};