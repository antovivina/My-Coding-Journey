class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        Set<String>set=new HashSet<>();
        Set<String>repeat=new HashSet<>();
        for(int i=0;i+10<=s.length();i++){
            String res=s.substring(i,i+10);
            if(set.contains(res)){
                repeat.add(res);
            }else{
                set.add(res);
            }
        }
        return new ArrayList<>(repeat);
        
    }
}