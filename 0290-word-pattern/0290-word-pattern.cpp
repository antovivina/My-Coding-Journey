class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string word;
        vector<string>ans;
        stringstream ss(s);
        while(ss>>word){
            ans.push_back(word);
        }
        if(pattern.size()!=ans.size()){
            return false;
        }
        unordered_map<char,string>map1;
        unordered_map<string,char>map2;
        for(int i=0;i<pattern.size();i++){
            if(map1.count(pattern[i])&&map1[pattern[i]]!=ans[i]){
                return false;
            }
            if(map2.count(ans[i])&&map2[ans[i]]!=pattern[i]){
                return false;
            }
            map1[pattern[i]]=ans[i];
            map2[ans[i]]=pattern[i];
        }
        return true;
    }
};