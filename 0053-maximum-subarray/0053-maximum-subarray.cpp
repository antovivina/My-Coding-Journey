class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int endres=nums[0];
        for(int i=1;i<nums.size();i++){
            res=max(nums[i],res+nums[i]);
            endres=max(res,endres);
        }
        return endres;
    }
};