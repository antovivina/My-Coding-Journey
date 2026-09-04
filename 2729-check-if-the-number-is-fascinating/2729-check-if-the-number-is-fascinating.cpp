class Solution {
public:
    bool isFascinating(int n) {
        int m=n;
        vector<int>ans;
        while(n!=0){
            int rem=n%10;
            ans.push_back(rem);
            n/=10;
        }
        int f1=m*2;
        int f2=m*3;
        while(f1!=0){
            int ren=f1%10;
            ans.push_back(ren);
            f1/=10;
        }
        while(f2!=0){
            int rek=f2%10;
            ans.push_back(rek);
            f2/=10;
        }
        if(ans.size()!=9){
            return false;
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<9;i++){
            if(ans[i]!=i+1){
                return false;
            }
        }
        return true;
    }
};