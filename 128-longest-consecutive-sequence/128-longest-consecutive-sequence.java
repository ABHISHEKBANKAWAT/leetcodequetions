class Solution {
    public int longestConsecutive(int[] arr) {
        HashMap<Integer,Boolean> map = new HashMap<>();
        for(int i = 0 ; i < arr.length; i++){
            if(map.containsKey(arr[i]-1)){
                map.put(arr[i],false);
            }
            else{
                map.put(arr[i],true);
            }
            if(map.containsKey(arr[i]+1)){
                map.put(arr[i]+1,false);
            }
        }
        int ans = 0; 
        for(int key : map.keySet()){
            if(map.get(key)){
                int count = 0;
            while(map.containsKey(key)){
                key++;
                count++;
            }
            
        ans = Math.max(ans,count);
            }
        }
        return ans;
    }
}