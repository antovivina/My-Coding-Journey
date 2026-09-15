class Solution {
    public int findDuplicate(int[] nums) {
        int res=0;
        Map<Integer,Integer>map=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
        }
        for(int i=0;i<nums.length;i++){
            if(map.get(nums[i])>=2){
                res=nums[i];
            }
        }
        return res;
    }
}