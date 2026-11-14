class Solution {
public:
    bool isBoomerang(vector<vector<int>>&nums) {
        int x1=nums[0][0];
        int y1=nums[0][1];
        int x2=nums[1][0];
        int y2=nums[1][1];
        int x3=nums[2][0];
        int y3=nums[2][1];
        if((x2-x1)*(y3-y1) != (y2-y1)*(x3-x1)){
            return true;
        }
        return false;
    }
};