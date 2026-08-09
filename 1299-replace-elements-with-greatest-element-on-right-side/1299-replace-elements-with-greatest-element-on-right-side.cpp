class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int max1=-1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>max1){
                    max1=nums[j];
                }
            }
            ans.push_back(max1);
        }
        return ans;
        
    }
};