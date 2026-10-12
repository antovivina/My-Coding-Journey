class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            vector<int>ans;
            while(nums[i]>0){
            int rem=nums[i]%10;
            ans.push_back(rem);
            nums[i]/=10;
            }
            for(int j=ans.size()-1;j>=0;j--){
                res.push_back(ans[j]);
            }
        }
        return res;
    }
};