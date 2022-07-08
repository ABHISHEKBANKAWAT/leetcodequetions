class Solution {
public:
    bool compare(vector<int> &selected,string &currentString)
    {
        vector<int> selfcheck(26,0);
        for(int i = 0 ; i < currentString.size();i++){
            if(selfcheck[currentString[i]-'a']== 1) return false;
            selfcheck[currentString[i]-'a'] = 1;
        }
        for(int i = 0 ; i< currentString.size();i++){
            if(selected[currentString[i]-'a']==1) return false;
        }
        return true;
    }
    int helper(int i,vector<string> &arr,vector<int> &selected,int len)
    {   if(i==arr.size()){
        return len;
    }
        string currString = arr[i];
        if(compare(selected,currString)==false){
           return  helper(i+1,arr,selected,len);
        }else{
            //pick
            
            for(int j = 0 ; j< currString.size() ; j++){
                selected[currString[j]-'a'] = 1;
            }
            len +=currString.length();
            int op1 = helper(i+1,arr,selected,len);
            //skip
             for(int j = 0 ; j< currString.size() ; j++){
                selected[currString[j]-'a'] = 0;
            }
            len -=currString.length();
            int op2 = helper(i+1,arr,selected,len);
            return  max(op1,op2);
        }
    }
    int maxLength(vector<string>& arr) {
        vector<int> selected(26,0);
        int len = 0;
        return helper(0,arr,selected,0);
        
    }
};