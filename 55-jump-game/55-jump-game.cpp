class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dest = nums.size()-1;
        int last = nums.size()-2;
        for(int i  = last ; i>=0 ; i--){
            if(nums[i]+i>=dest){
                dest = i;
            }
        }
        return dest == 0;
    }
};