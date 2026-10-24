class Solution {
public:
    int buyChoco(vector<int>& nums, int money) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<2;i++){
            sum+=nums[i];
        }
        if(sum <= money){
            return money-sum;
        }
        return money;
    }
};