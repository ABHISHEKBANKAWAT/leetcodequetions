class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0 ; i<n;i++){
            int n = abs(nums[i]);
            if(nums[n-1]<0){
                ans.push_back(n);
            }else{
                nums[n-1] = -nums[n-1];
            }
        }
        return ans;
    }
};