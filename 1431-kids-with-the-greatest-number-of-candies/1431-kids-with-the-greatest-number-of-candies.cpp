class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int k) {
        vector<bool>ans;
        int max1=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if((nums[i]+k)>=max1){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};