class Solution {
    public void sortColors(int[] nums) {
        int j=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }
        int k=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=1){
                int temp=nums[i];
                nums[i]=nums[k];
                nums[k]=temp;
                k++;
            }
        }
        int l=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=2){
                int temp=nums[i];
                nums[i]=nums[l];
                nums[l]=temp;
                l++;
            }
        }
    }
}