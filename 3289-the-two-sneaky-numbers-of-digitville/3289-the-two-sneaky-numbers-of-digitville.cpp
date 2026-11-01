class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freqarr;
        for(int i=0;i<nums.size();i++){
            freqarr[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(freqarr[nums[i]]==2){
                ans.push_back(nums[i]);
                freqarr[nums[i]]=0;
            }
        }
        return ans;
    }
};