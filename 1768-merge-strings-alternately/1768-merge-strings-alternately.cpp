class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        string res="";
        int i=0;
        int j=0;
        while(i<s1.size()&&j<s2.size()){
            res+=s1[i];
            res+=s2[j];
            i++;
            j++;
        }
        while(i<s1.size()){
            res+=s1[i];
            i++;
        }
        while(j<s2.size()){
            res+=s2[j];
            j++;
        }
        return res;
    }
};