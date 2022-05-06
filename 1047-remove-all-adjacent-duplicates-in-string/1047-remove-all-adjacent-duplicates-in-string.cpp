class Solution {
public:
//     string removeDuplicates(string s) {
//          stack<char> st;
//         string ans;
//         for(int i = 0 ; i< s.length();i++){
//             if(st.empty() || st.top() != s[i]){
//                 st.push(s[i]);
//             }
//             else if(st.top()==s[i]){
//                 st.pop();
//             }
//         }
//         while(st.size()!=0){
//         ans = st.top()+ans;
//             st.pop();
//         }
//         return ans;
    
//     }
// };
    string removeDuplicates(string& s) {
        int i = 0;
        for(int j = 1; j < s.size(); ++j)
            if (i < 0 || s[i] != s[j]) s[++i] = s[j];
            else --i;
        return s.substr(0, i + 1);
    }
};