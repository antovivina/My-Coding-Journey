class Solution {
public:
    bool checkString(string s) {
        if(s.find('b') == string::npos){
            return true;
        }
        bool found=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                found=true;
            }
            if(s[i]=='a'&&found==true){
                return false;
            }
        }
        return true;
    }
};