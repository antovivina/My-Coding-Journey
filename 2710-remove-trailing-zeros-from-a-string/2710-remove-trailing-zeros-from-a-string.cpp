class Solution {
public:
    string removeTrailingZeros(string nums) {
        int res=0;
        string ans="";
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!='0'){
                res=i;
                break;
            }
        }
        for(int i=0;i<=res;i++){
            ans+=nums[i];
        }
        return ans;
    }
};