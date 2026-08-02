class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int lf=0,rf=0;
        for(int i=0;i<nums.size();i++){
            rf=sum-nums[i]-lf;
            if(lf==rf){
                return i;
            }
            lf+=nums[i];
        }
        return -1;
    }
};