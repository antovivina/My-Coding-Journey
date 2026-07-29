class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ps(n),ss(n),res(n);
        ps[0]=1;
        for(int i=1;i<n;i++){
            ps[i]=nums[i-1]*ps[i-1];
        }
        ss[n-1]=1;
        for(int j=n-2;j>=0;j--){
            ss[j]=nums[j+1]*ss[j+1];
        }
        for(int i=0;i<n;i++){
            res[i]=ps[i]*ss[i];
        }
        return res;
    }
};