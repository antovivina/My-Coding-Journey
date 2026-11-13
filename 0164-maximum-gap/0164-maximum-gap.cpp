class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxgap=0;
        for(int i=0;i<nums.size()-1;i++){
            int diff=nums[i+1]-nums[i];
            if(diff>maxgap){
                maxgap=diff;
            }
        }
        return maxgap;

    }
};