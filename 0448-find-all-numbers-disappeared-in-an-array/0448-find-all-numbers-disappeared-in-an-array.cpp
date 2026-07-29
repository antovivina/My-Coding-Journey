class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        vector<int>freqarr(n+1,0);
        for(int i=0;i<n;i++){
            freqarr[nums[i]]++;
        }
        for(int i=1;i<freqarr.size();i++){
            if(freqarr[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};