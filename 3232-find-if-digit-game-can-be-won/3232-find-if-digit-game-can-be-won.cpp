class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sin=0;
        int doub=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                sin+=nums[i];
            }else{
                doub+=nums[i];
            }
        }
        if(sin!=doub){
            return true;
        }
        return false;
    }
};