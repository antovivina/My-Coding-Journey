class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        int pos = 0;

        for(int i=0; i<n-1; i++) {
            if(nums[i] > nums[i+1]) {
                c++;
                pos = i+1;
            }
        }

        if(c == 0)
            return 0;

        if(c == 1 && nums[n-1] <= nums[0])
            return n-pos;

        return -1;
    }
};