class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev=0;
        int ori=num;
        while(num!=0){
            int rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        int rev2=0;
        while(rev!=0){
            int ren=rev%10;
            rev2=rev2*10+ren;
            rev=rev/10;
        }
        if(rev2==ori){
            return true;
        }
        return false;
    }
};