class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>a=score;
        sort(a.rbegin(),a.rend());
        map<int,string>mp;
        for(int i=0;i<score.size();i++){
            if(i==0){
                mp[a[i]]="Gold Medal";
            }else if(i==1){
                mp[a[i]]="Silver Medal";
            }else if(i==2){
                mp[a[i]]="Bronze Medal";
            }else{
                mp[a[i]]=to_string(i+1);
            }
        }
        vector<string>ans;
        for(int i=0;i<score.size();i++){
            ans.push_back(mp[score[i]]);
        }
        return ans;
    }
};