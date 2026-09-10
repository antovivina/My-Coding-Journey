class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
        while(i<j&&!(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u')){
            i++;
        }
        while(i<j&&!(tolower(s[j])=='a'||tolower(s[j])=='e'||tolower(s[j])=='i'||tolower(s[j])=='o'||tolower(s[j])=='u')){
            j--;
        }
        if(i<j){
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
        }
    }
        return s;
    }
};