class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int low = 0 , high = nums.size()-1;
        while(low+1<nums.size() && nums[low]<=nums[low+1]) low++;
        while(high-1 >= 0 && nums[high-1]<=nums[high]) high--;
        
        if(low == nums.size()-1)return 0;
        int minn = INT_MAX , maxx = INT_MIN;
        for(int i = low ; i<= high ; i++){
            minn = min(minn,nums[i]);
            maxx = max(maxx,nums[i]);
        }
        while(low-1 >=0 && nums[low-1] > minn) low--;
        while(high+1 <= nums.size()-1 && nums[high+1] < maxx)high++;
        
        return high-low+1;
    }
};