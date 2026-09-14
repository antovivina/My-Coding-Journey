class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>>res=new ArrayList<>();
        if(nums.length==0){
            return res;
        }
        Arrays.sort(nums);
        Map<Integer,Integer> maps=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            maps.put(nums[i],i);
        }
        Set<String> sets=new HashSet<>();
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                int currsum=nums[i]+nums[j];
                if(maps.containsKey(-1*currsum)){
                    int k=maps.get(-1*currsum);
                    if(!sets.contains(nums[i]+";"+nums[j]+";"+nums[k])&&k>i&&k>j){
                        res.add(Arrays.asList(nums[i],nums[j],nums[k]));
                        sets.add(nums[i]+";"+nums[j]+";"+nums[k]);
                    }
                }
            }
        }
        return res;
    }
}