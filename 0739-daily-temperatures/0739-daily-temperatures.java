class Solution {
    public int[] dailyTemperatures(int[] temp) {
        Stack<Integer>stack=new Stack<>();
        int[] ans=new int[temp.length];
        for(int i=0;i<temp.length;i++){
            while(!stack.isEmpty()&&temp[i]>temp[stack.peek()]){
                if(!stack.empty()){
                    int prev=stack.pop();
                    ans[prev]=i-prev;
                }else{
                    break;
                }
            }
            stack.push(i);
        }
        return ans;
    }
}