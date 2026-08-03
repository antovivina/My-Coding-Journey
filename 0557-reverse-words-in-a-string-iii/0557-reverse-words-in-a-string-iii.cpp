class Solution {
public:
    string reverseWords(string s) {
        string res="";
        string word;
        stringstream ss(s);
        while(ss>>word){
            reverse(word.begin(),word.end());
            if(res.empty()){
                res+=word;
            }else{
                res+=" ";
                res+=word;
            }
        }
        return res;
    }
};