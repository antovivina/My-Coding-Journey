class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        string word;
        string res="";
        stringstream ss(s);
        while(ss>>word){
            ans.push_back(word);
        }
        for(int i=ans.size()-1;i>=0;i--){
            res+=ans[i];
            if(i!=0){
                res+=" ";
            }
        }
        return res;
    }
};