class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>freqarr;
        for(int i=0;i<n;i++){
            freqarr[nums[i]]++;
        }
        for(unordered_map<int,int>::iterator i=freqarr.begin();i!=freqarr.end();i++){
            if(i->second>n/3){
                ans.push_back(i->first);
            }
        }
        return ans;
    }
};