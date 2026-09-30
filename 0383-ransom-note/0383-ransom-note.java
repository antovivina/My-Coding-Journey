class Solution {
    public boolean canConstruct(String s1, String s2) {
        int[] freq=new int[26];
        int[] freq2=new int[26];
        for(int i=0;i<s2.length();i++){
            char ch=s2.charAt(i);
            freq[ch-'a']++;
        }
        for(int i=0;i<s1.length();i++){
            char ch1=s1.charAt(i);
            freq2[ch1-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq2[i]>freq[i]){
                return false;
            }
        }
        return true;
    }
}