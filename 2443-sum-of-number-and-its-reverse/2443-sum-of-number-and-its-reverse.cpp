class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        if(num==0){
            return true;
            return 0;
        }
        for(int i=1;i<=num;i++){
            int x=i;
            int rev=0;
            while(x>0){
                int rem=x%10;
                rev=rev*10+rem;
                x=x/10;
            }
            if(i+rev==num){
                return true;
            }
        }
        return false;
    }
};