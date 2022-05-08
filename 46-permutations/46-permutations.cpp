class Solution {
public:
    // void helper(vector<int> &ds,vector<vector<int>> &ans,vector<int> &nums,int freq[]){
    //     if(ds.size()==nums.size()){
    //         ans.push_back(ds);
    //         return;
    //     }
    //     for(int i = 0 ; i < nums.size();i++){
    //         if(!freq[i]){
    //             ds.push_back(nums[i]);
    //             freq[i] = 1;
    //             helper(ds,ans,nums,freq);
    //             freq[i] = 0;
    //             ds.pop_back();
    //         }
    //     }
    // }
    void helper(int idx, vector<int> &nums,vector<vector<int>> &ans){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = idx ; i < nums.size();i++){
            swap(nums[idx],nums[i]);
            helper(idx+1,nums,ans);
            swap(nums[idx],nums[i]);
            
            }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
       // vector<int> ds;
        //int n = nums.size();
        //int freq[10] = {0};
        helper(0,nums,ans);
        return ans;
    }
};