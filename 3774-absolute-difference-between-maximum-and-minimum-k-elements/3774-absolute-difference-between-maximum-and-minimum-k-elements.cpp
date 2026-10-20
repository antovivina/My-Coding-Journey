class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>min;
        vector<int>max;
        for(int i=0;i<k;i++){
            min.push_back(nums[i]);
        }
        for(int j=nums.size()-k;j<nums.size();j++){
            max.push_back(nums[j]);
        }
        int sum=0;
        int sum1=0;
        for(int i=0;i<min.size();i++){
            sum+=min[i];
        }
        for(int j=0;j<max.size();j++){
            sum1+=max[j];
        }
        return abs(sum-sum1);
    }
};