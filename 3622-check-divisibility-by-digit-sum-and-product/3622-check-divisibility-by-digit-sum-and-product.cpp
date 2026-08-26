class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int sum=0,p=1;
        while(n!=0){
            int rem=n%10;
            sum+=rem;
            p*=rem;
            n/=10;
        }
        int sum2=sum+p;
        if(num%sum2==0){
            return true;
        }
        return false;
    }
};