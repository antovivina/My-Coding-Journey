class Solution {
public:
    int countSegments(string s) {
        string word;
        int c=0;
        stringstream ss(s);
        while(ss>>word){
            c++;
        }
        return c;
    }
};