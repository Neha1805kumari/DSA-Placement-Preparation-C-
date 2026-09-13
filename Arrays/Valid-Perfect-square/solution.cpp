class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low =0;
        long long high =num;
        while (low<=high){
            long long mid = low+(high-low)/2;
            long long  multi = 1LL*mid*mid;
            if (multi ==num){
                return true;
            }else if (multi<=num ){
                low = mid+1;
            }else{
                high=mid-1;
            }
        }
        return false;
    }
};

//here we have to make sure for the data type used we will use long long here as well i have stored it in multi so that i dont have to perfrom this again and again  ...rest it is similar like 69 i.e sqrt(x)...