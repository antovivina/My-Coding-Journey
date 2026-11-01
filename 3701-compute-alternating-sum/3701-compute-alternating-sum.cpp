class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int res;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                res+=nums[i];
            }else{
                res-=nums[i];
            }
        }
        return res;
    }
};