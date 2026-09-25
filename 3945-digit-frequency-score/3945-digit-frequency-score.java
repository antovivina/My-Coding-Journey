class Solution {
    public int digitFrequencyScore(int n) {
        int num=n;
        int sum=0;
        while(num!=0){
            int rem=num%10;
            sum=sum+rem;
            num/=10;
        }
        return sum;
    }
}