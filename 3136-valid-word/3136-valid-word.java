class Solution {
    public boolean isValid(String word) {
        int v=0;
        int c=0;
        if(word.length()<3){
            return false;
        }
        for(int i=0;i<word.length();i++){
            char ch=word.charAt(i);
            if(!Character.isLetterOrDigit(ch)){
                return false;
            }
            ch=Character.toLowerCase(ch);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                v++;
            }else if(Character.isLetter(ch)){
                c++;
            }
        }
        if(v!=0&&c!=0){
            return true;
        }
        return false;
    }
}