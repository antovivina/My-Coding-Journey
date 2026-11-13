class Solution {
public:
    int binaryGap(int n) {
        int last = -1, ans = 0;

        for(int i = 0; n > 0; i++) {
            if(n % 2 == 1) {
                if(last != -1)
                    ans = max(ans, i - last);

                last = i;
            }
            n = n / 2;
        }

        return ans;
        
    }
};