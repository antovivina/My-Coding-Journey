class Solution {
public:
    double average(vector<int>& nums) {
        int min1=*min_element(nums.begin(),nums.end());
        int max1=*max_element(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=min1&&nums[i]!=max1){
                ans.push_back(nums[i]);
            }
        }
        double avg;
        int sum=0;
        int n=ans.size();
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        avg=(double)sum/n;
        return avg;
    }
};