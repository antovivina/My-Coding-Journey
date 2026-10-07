class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int maxk=nums[0];
        int mink=nums[0];
        int ts=nums[0];
        int ans=nums[0];
        int minans=nums[0];
        for(int i=1;i<nums.length;i++){
            ts+=nums[i];
            maxk=Math.max(nums[i],nums[i]+maxk);
            mink=Math.min(nums[i],nums[i]+mink);
            ans=Math.max(maxk,ans);
            minans=Math.min(mink,minans);
        }
        if(ans<0){
            return ans;
        }
        return Math.max(ans,ts-minans);
    }
}