class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c=0;
        int c1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                continue;
            }else if(nums[i]<0){
                c++;
            }else{
                c1++;
            }
        }
        return max(c,c1);
    }
};