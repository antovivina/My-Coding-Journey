class Solution {
    public int[] topKFrequent(int[] nums, int k) {

        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        ArrayList<Integer> ans = new ArrayList<>();
        for (int count = 0; count < k; count++) {
            int maxFrequency = 0;
            int element = 0;
            for (int num : map.keySet()) {
                if (map.get(num) > maxFrequency) {
                    maxFrequency = map.get(num);
                    element = num;
                }
            }
            ans.add(element);
            map.remove(element);
        }
        int[] result = new int[k];
        for (int i = 0; i < k; i++) {
            result[i] = ans.get(i);
        }
        return result;
    }
}