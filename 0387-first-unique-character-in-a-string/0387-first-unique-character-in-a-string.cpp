class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freqarr(26);
        for(int i=0;i<s.size();i++){
            freqarr[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(freqarr[s[i]-'a']==1){
                return i;
                break;
            }
        }
        return -1;
    }
};