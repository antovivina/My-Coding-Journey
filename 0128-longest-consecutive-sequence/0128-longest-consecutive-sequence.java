class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length==0){
            return 0;
        }
        int c=1;
        int max=1;
        Arrays.sort(nums);
        for(int i=0;i<nums.length-1;i++){
            if((nums[i+1]-1)==nums[i]){
                c++;
            }else if(nums[i+1]==nums[i]){
                continue;
            }else{
                c=1;
            }
            if(c>max){
                max=c;
            }
        }
        return max;
    }
}