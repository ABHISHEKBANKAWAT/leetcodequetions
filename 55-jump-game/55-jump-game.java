class Solution {
    public boolean canJump(int[] nums) {
        int last = nums.length-2;
        int dest = nums.length - 1;
        
        for(int i = last ; i >=0 ; i--){
            if(i + nums[i] >= dest){
                dest = i;
            }
        }
        return dest == 0;
    }
}