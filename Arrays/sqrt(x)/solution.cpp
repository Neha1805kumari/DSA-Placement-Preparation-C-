class Solution {
public:
    int mySqrt(int x) {
        int low =0;         // we r taking 0 as well because it  may be the answer like sqrt(0) is 0.
        int high = x ;
        while (low<= high ){
           int  mid = low + (high - low)/2;
            if (1LL* mid * mid <= x){         // this is done to do int multiplication into long long multiplication i.e 1LL
                low = mid +1;
            }else {
                high = mid-1 ;
            }
        } 
        return high;
    }
};

// lets take sqrt8 is 2 ... here low =0 , high = 8 mid =4 .... now  mid * mid =16 which is greater then 8 so if condition will not work then else will work so high = 3 and low =0 ... now mid =1 now 1*1 i.e 1 is <=8 then low = 2 high = 3  then mid =2  ..... 2*2=4 i.e 4<=8 so low =3 high =3 still .... now mid = 3 ...3*3 =9 so else condition will work and high =2 ..... return high at the end .....i.e 2 

// lets take sqrt 25...ie.5 here low =0 , high = 25 mid = 12 .... 12*12 =144 i.e else condition will work and high = 11 , low = 0 ..... now mid = 5  ...5*5 =25 which is <= 25 so if condition will be updated and low = 6 and high =11 mid = 8 then 8*8 =64 ... high = 7 low = 6 (only else condition ) ..mid = 6 ... 6* 6 = 36 <= 25 then else condition then high = 5  low =6 so now low !< high so return high ...i.e 5 
