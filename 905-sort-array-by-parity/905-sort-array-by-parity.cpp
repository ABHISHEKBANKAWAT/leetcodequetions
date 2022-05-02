class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
          int j = nums.size()-1;
        int i = 0;
        while(i<j){
            if(nums[i]%2==0){
                i++;
            }
            else if(nums[i]%2==1){
                swap(nums[i],nums[j]);
                j--;
            }
        }
        return nums;
    }
};