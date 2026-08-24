class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freqarr;
        for(int i=0;i<arr.size();i++){
            freqarr[arr[i]]++;
        }
        vector<int>ans;
        for(unordered_map<int,int>::iterator i=freqarr.begin();i!=freqarr.end();i++){
            ans.push_back(i->second);
        }
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[i]==ans[j]){
                    return false;
                }
            }
        }
        return true;
    }
};