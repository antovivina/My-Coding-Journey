class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0;
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>freqarr;
        for(int i=0;i<n;i++){
            freqarr[nums[i]]++;
        }
        for(unordered_map<int,int>::iterator i=freqarr.begin();i!=freqarr.end();i++){
            if(i->second>n/2){
               res=i->first;
            }
        }
        return res;
    }
};