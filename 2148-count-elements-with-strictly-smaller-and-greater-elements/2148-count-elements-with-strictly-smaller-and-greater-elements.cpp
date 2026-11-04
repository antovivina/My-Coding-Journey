class Solution {
public:
    int countElements(vector<int>& nums) {
        int c=0;
        int min1=*min_element(nums.begin(),nums.end());
        int max1=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<max1&&nums[i]>min1){
                c++;
            }
        }
        return c;
    }
};