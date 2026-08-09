class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans=-1;
        while(i<j){
            int w=j-i;
            int h=min(height[i],height[j]);
            int a=w*h;
            ans=max(ans,a);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};