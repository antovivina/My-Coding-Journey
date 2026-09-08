class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int p=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=p;
            p=p*nums[i];
        }
        int s=1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]=ans[i]*s;
            s=s*nums[i];
        }
        return ans;
    }
};