class Solution {
    public int fourSumCount(int[] nums1, int[] nums2, int[] nums3, int[] nums4) {
        Map<Integer,Integer>map=new HashMap<>();
        for(int i=0;i<nums1.length;i++){
            for(int j=0;j<nums2.length;j++){
                int currsum=nums1[i]+nums2[j];
                map.put(currsum,map.getOrDefault(currsum,0)+1);
            }
        }
        int c=0;
        for(int k=0;k<nums3.length;k++){
            for(int l=0;l<nums4.length;l++){
                int currsum1=nums3[k]+nums4[l];
                if(map.containsKey(-currsum1)){
                    c+=map.get(-currsum1);
                }

            }
        }
        return c;
    }
}