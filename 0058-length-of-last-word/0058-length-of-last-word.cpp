class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>ans;
        string word;
        stringstream ss(s);
        while(ss>>word){
            ans.push_back(word);
        }
        reverse(ans.begin(),ans.end());
        return ans[0].size();
    }
};