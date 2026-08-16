class Solution {
public:
    int maxPower(string s) {
        int c=0;
        int nc=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                c++;
            if(c>nc){
                nc=c;
            }
            }else{
                c=0;
            }
        }
        return nc+1;
    }
};