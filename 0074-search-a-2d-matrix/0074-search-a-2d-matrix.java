class Solution {
    public boolean searchMatrix(int[][] mat, int target) {
        int m=mat.length;
        int n=mat[0].length;
        int l=0;
        int r=m*n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int ro=mid/n;
            int c=mid%n;
            if(mat[ro][c]==target){
                return true;
            }else if(mat[ro][c]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
       return false;
    }
}