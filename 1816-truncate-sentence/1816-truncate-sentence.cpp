class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string>ans;
        string res="";
        string word;
        stringstream ss(s);
        while(ss>>word){
            ans.push_back(word);
        }
        for(int i=0;i<k;i++){
            res+=ans[i];
            if(i!=k-1){
                res+=" ";
            }
        }
        return res;
    }
};