class Solution {
    public int missingNumber(int[] nums) {
        int asum=0;
        int sum=0;
        int n=nums.length;
        int res=0;
        for(int i=0;i<nums.length;i++){
            asum+=nums[i];
        }
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        res=sum-asum;
        return res;
    }
}