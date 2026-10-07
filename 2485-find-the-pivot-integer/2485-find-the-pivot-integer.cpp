class Solution {
public:
    int pivotInteger(int n) {
        int ts=n*(n+1)/2;
        int s=0;
        for(int i=1;i<=n;i++){
            s+=i;
            if(ts-s+i==s){
                return i;
            }
        }
        return -1;
    }
};