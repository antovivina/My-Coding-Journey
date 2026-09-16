class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int n=nums.length;
        List<Integer> ans = new ArrayList<>();
        int[] arr=new int[n+1];
       for(int i=0;i<nums.length;i++){
        arr[nums[i]]++;    
        }
        for(int i=1;i<=nums.length;i++){
            if(arr[i]==0){
                ans.add(i);
            }
        }
        return ans;
    }
}