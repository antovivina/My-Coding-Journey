class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int c=0;
        Map<Character,Integer>map=new HashMap<>();
        for(int i=0;i<jewels.length();i++){
            map.put(jewels.charAt(i),map.getOrDefault(jewels.charAt(i),0)+1);
        }
        for(int i=0;i<stones.length();i++){
            if(map.containsKey(stones.charAt(i))){
                c++;
            }
        }
        return c;
    }
}