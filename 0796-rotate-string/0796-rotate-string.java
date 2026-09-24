class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            String res="";
            res+=s.substring(i,s.length());
            res+=s.substring(0,i);
            if(res.equals(goal)){
                return true;
            }
        }
        return false;
        
    }
}