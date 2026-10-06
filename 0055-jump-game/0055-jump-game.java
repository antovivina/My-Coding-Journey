class Solution {
    public boolean canJump(int[] nums) {
        int maxj=0;
        for(int i=0;i<nums.length;i++){
            if(i>maxj){
                return false;
            }
            maxj=Math.max(nums[i]+i,maxj);
        }
        return true;
        
    }
}