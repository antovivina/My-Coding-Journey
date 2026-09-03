class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>ans;
        while(n!=0){
            int rem=n%10;
            ans.push_back(rem);
            n=n/10;
        }
        int m=*max_element(ans.begin(),ans.end());
        vector<int>freqarr(m+1,0);
        for(int i=0;i<ans.size();i++){
            freqarr[ans[i]]++;
        }
        int res=INT_MAX;
        int ress=-1;
        for(int i=0;i<freqarr.size();i++){
            if(freqarr[i]>0&&freqarr[i]<res){
                res=freqarr[i];
                ress=i;
            }
        }
        return ress;
    }
};