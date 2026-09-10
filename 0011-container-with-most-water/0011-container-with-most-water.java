class Solution {
    public int maxArea(int[] height) {
        int i=0;
        int answer=-1;
        int n=height.length;
        int j=n-1;
        while(i<j){
            int w=(j-i);
        int h=Math.min(height[i],height[j]);
        int ans=w*h;
        answer=Math.max(ans,answer);
        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }
        }
        return answer;
    }
}