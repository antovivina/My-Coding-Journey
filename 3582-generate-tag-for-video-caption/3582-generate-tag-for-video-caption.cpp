class Solution {
public:
    string generateTag(string caption) {
        string res="#";
        string word;
        vector<string>ans;
        stringstream ss(caption);
        while(ss>>word){
            ans.push_back(word);
        }
        if(ans.size()==0){
            return "#";
        }
        for(int i=0;i<ans[0].size();i++){
            res+=tolower(ans[0][i]);
        }
        for(int i=1;i<ans.size();i++){
            res+=toupper(ans[i][0]);
            for(int j=1;j<ans[i].size();j++){
                res+=tolower(ans[i][j]);
            }
        }
        if(res.size()>100){
            res=res.substr(0,100);
        }
        return res;
    }
};