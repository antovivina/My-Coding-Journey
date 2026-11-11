class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=nums[0];
        int pos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                pos=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i!=pos&&max<(2*nums[i])){
                return -1;
            }
        }
        return pos;
    }
};