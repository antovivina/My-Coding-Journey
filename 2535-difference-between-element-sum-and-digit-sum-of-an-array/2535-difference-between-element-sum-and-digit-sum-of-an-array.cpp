class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int sum1=0;
        for(int i=0;i<nums.size();i++){
           int n=nums[i];
           while(n>0){
            int rem=n%10;
            sum1=sum1+rem;
            n=n/10;
           }
        }
        return sum-sum1;
    }
};