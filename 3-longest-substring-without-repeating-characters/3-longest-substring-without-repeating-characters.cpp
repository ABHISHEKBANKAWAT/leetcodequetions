class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256,-1);
        int n = s.length();
        int start = -1 ;
        int maxlen = 0;
        for(int i = 0 ; i<n ; i++){
            if(dict[s[i]]>start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxlen = max(maxlen , i - start); 
        }
        return maxlen;
    }
};