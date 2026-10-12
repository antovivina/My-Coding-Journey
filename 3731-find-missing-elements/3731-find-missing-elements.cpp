class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        vector<int>res;
        int max1=*max_element(nums.begin(),nums.end());
        int min2=*min_element(nums.begin(),nums.end());
        for(int i=min2;i<=max1;i++){
            ans.push_back(i);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<ans.size();i++){
            bool found=false;
            for(int j=0;j<nums.size();j++){
                if(ans[i]==nums[j]){
                    found=true;
                    break;
                }
            }
            if(found==false){
                res.push_back(ans[i]);
            }
        }
        return res;
    }
};