class Solution {
public:
    int mySqrt(int x) {
        for(long int i=0;i<=x;i++){
            if(i*i>x){
                return i-1;
            }else if(i*i==x){
                return i;
            }
        }
        return -1;
    }
    //     long int s = 0 , e = 1e8 , ans = 0;
    //     while(s<=e){
    //         long int m = s+(e-s)/2;
    //         if(m*m<=x){
    //             ans = m;
    //             s= m+1;
    //         }
    //         else{
    //             e = m-1;
    //         }
    //     }
    //     return ans;
    // }
};