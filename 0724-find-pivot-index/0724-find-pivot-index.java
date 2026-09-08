class Solution {
    public int pivotIndex(int[] nums) {
        int n=nums.length;
        int sum=0,lf=0,rf=0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            rf=sum-nums[i]-lf;
            if(rf==lf){
                return i;
            }
            lf+=nums[i];
        }
        return -1;
    }
}