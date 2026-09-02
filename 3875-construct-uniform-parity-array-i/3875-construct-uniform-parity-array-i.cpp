class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>nums2;
        for(int i=0;i<nums1.size();i++){
            nums2.push_back(nums1[i]);
        }
        if(nums1.size()==nums2.size()){
            return true;
        }
        return false;
    }
};