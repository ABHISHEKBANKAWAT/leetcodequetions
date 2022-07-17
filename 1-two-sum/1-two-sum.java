class Solution {
    public int[] twoSum(int[] nums, int target) {
          int start=0;
           int end=1;
            while(true)
            {
                if(nums[start]+nums[end]==target)
                {
                    return new int[]{start,end};
                    
                }
                else if( end==nums.length-1)
                {
                    start=start+1;
                    end=start+1;
                }
                else if(start==nums.length-1)
                {
                    return null;
                    
                }
                else
                {
                    end=end+1;
                }
            }
       
            
    }
}