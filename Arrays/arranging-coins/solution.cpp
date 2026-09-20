class Solution {
public:
    int arrangeCoins(int n) {
       int low = 1;
       long long high = n;
       while (low<= high){
        long long mid = low +(high-low)/2;
        long long  newM=(mid*(mid+1))/2;
        if ( newM== n){
            return mid ; 
        }else if (newM>n){
            high = mid-1;
        }else{
            low= mid +1;
        }
       } 
       return high;

    }
    
};

//i m so happy i cracked this code u know ..... 1st  I thought of the 1+2+3+....n natural no. formulae ..... then i though about the condition mid(mid+1)/2 ==n , <=n and >=n cases ...do dry run to find out return high , low  hoga ?
