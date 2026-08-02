class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>freqarr(n+1,0);
        for(int i=0;i<n;i++){
            freqarr[nums[i]]++;
        }
        int res=0;
        for(int i=0;i<freqarr.size();i++){
            if(freqarr[i]>=2){
                res=i;
            }
        }
        return res;
    }
};