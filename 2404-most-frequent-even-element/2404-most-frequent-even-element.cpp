class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int max1=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>freqarr(max1+1,0);
        for(int i=0;i<n;i++){
            freqarr[nums[i]]++;
        }
        int maxfreq=0;
        int answer=-1;
        for(int i=0;i<freqarr.size();i++){
            if(i%2==0&&freqarr[i]>maxfreq){
                maxfreq=freqarr[i];
                answer=i;
            }
        }
        return answer;
    }
};