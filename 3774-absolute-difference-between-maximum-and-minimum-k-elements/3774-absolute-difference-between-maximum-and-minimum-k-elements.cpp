class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum1=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        for(int j=nums.size()-k;j<nums.size();j++){
            sum1+=nums[j];
        }
        return abs(sum-sum1);
    }
};