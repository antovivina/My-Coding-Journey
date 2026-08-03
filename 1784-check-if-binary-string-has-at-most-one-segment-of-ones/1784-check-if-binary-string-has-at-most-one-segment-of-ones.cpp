class Solution {
public:
    bool checkOnesSegment(string s) {
        int idx=s.find("01");
        if(idx==string::npos){
            return true;
        }
        return false;
    }
};