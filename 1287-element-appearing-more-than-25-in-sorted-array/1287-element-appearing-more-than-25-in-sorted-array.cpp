class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int qu=arr.size()/4;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==arr[i+qu]){
                return arr[i];
            }
        }
        return -1;
    }
};