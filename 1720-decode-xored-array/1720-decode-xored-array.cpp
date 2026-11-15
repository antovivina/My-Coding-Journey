class Solution {
public:
    vector<int> decode(vector<int>& nums, int first) {
        vector<int>ans;
        ans.push_back(first);
        for(int i=0;i<nums.size();i++){
            int next=ans[i]^nums[i];
            ans.push_back(next);
        }
        return ans;
    }
};