class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n(size(nums)) , minAvgSum(INT_MAX) , index;
        long long sumFront(0) , sumEnd(0);
        for(auto &n :nums) sumEnd += n;
        for(int i = 0 ; i<n;i++){
            sumFront += nums[i];
            sumEnd -= nums[i];
            int a = sumFront/(i+1);
            int b = (i==n-1)? 0 : sumEnd/(n-i-1);
            if(abs(a-b)<minAvgSum){
                minAvgSum = abs(a-b);
                index =i;
            }
        }
        return index;
    }
};