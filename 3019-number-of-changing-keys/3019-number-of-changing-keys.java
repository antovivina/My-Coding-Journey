class Solution {
    public int countKeyChanges(String s) {
        String res="";
        for(int i=0;i<s.length();i++){
            char ch=Character.toLowerCase(s.charAt(i));
            res+=ch;
        }
        int c=0;
        for(int i=1;i<res.length();i++){
            if(res.charAt(i-1)!=res.charAt(i)){
                c++;
            }
        }
        return c;
    }
}