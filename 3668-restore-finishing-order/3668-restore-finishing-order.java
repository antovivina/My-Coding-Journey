class Solution {
    public int[] recoverOrder(int[] order, int[] friends) {
        int k=0;
        for(int i=0;i<order.length;i++){
            for(int j=0;j<friends.length;j++){
               if(order[i]==friends[j]){
                int temp=friends[j];
                friends[j]=friends[k];
                friends[k]=temp;
                k++;
               }
            }
        }
        return friends;
    }
}