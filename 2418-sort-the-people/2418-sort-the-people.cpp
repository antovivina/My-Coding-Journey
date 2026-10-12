class Solution {
public:
    vector<string> sortPeople(vector<string>& nums, vector<int>& heights) {
        vector<pair<int,string>>ans;
        for(int i=0;i<heights.size();i++){
            ans.push_back({heights[i],nums[i]});
        }
        sort(ans.rbegin(),ans.rend());
        vector<string>res;
        for(int i=0;i<ans.size();i++){
            res.push_back(ans[i].second);
        }
        return res;
    }
};