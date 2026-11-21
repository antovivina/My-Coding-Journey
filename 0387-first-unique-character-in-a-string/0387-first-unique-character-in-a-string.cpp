class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        int freqarr[26]={0};
        for(int i=0;i<n;i++){
            freqarr[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(freqarr[s[i]-'a']==1){
                return i;
                break;
            }
        }
        return -1;
    }
};