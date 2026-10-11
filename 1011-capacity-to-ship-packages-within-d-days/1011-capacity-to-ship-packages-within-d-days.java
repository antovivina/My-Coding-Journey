class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int left = 0, right = 0;

        for (int i = 0; i < weights.length; i++) {
            left = Math.max(left, weights[i]);
            right += weights[i];
        }

        while (left < right) {
            int mid = left + (right - left) / 2;

            int daysNeeded = 1;
            int sum = 0;

            for (int i = 0; i < weights.length; i++) {
                if (sum + weights[i] > mid) {
                    daysNeeded++;
                    sum = 0;
                }
                sum += weights[i];
            }

            if (daysNeeded <= days) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
}