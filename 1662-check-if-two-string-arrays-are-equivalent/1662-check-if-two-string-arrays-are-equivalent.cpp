class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res="";
        string res1="";
        for(int i=0;i<word1.size();i++){
            res+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
            res1+=word2[i];
        }
        if(res==res1){
            return true;
        }
        return false;
    }
};