class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
            return 0;
        }
        int freqarr1[26]={0};
        int freqarr2[26]={0};
        for(int i=0;i<s.length();i++){
            freqarr1[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            freqarr2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freqarr1[i]!=freqarr2[i]){
                return false;
            }
        }
        return true;
    }
};