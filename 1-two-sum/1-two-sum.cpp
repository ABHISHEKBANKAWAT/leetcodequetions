class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     unordered_map<int,int> ans;
        int n = nums.size();
    //     for(int i=0;i<n;i++){
    //         int numtofind = target - nums[i] ;
    //             if(ans.find(numtofind) != ans.end()){
    //             return {i,ans[numtofind]};
    //             }
    //         ans[nums[i]] = i;
    //         }
    //     return {-1,-1};
    //     }
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(nums[i]+nums[j] == target)
//                 return {i,j};
//         }
        
//     }
//     return {-1,-1};
//     }
        
        //using sort function
        vector<pair <int,int>> v;
        for(int i =0 ;i<n;i++){
            v.push_back({nums[i],i});
        }
            sort(v.begin(),v.end());
            int s=0,e=n-1;
            while(s<e){
                int sum = v[s].first + v[e].first;
                if(sum==target) return {v[s].second , v[e].second};
                else if(sum>target) e--;
                else s++;
            }
            
        
        return {-1,-1};
    }
    
        
};