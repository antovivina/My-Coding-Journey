class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>freqarr(26,0);
        for(int i=0;i<sentence.size();i++){
            freqarr[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freqarr[i]==0){
                return false;
            }
        }
        return true;
    }
};