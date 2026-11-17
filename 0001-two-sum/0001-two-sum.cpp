class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        vector<pair<int,int>>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            int sum=arr[i].first+arr[j].first;
            if(sum==target){
                ans.push_back(arr[i].second);
                ans.push_back(arr[j].second);
                break;
            }else if(sum<target){
                i++;
            }else if (sum>target){
                j--;
            }
        }
        return ans;
    }
};

