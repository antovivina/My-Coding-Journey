class Solution {
public:
    int heightChecker(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        int c=0;
        sort(ans.begin(),ans.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
           if(nums[i]!=ans[i]){
            c++;
           }
        }
        return c;
    }
};