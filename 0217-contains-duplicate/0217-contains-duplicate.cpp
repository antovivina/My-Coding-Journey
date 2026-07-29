class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>freqarr;
        for(int i=0;i<nums.size();i++){
            freqarr[nums[i]]++;
        }
        for(unordered_map<int,int>::iterator i=freqarr.begin();i!=freqarr.end();i++){
            if(i->second>=2){
                return true;
                break;
            }
        }
        return false;
    }
};