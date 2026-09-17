class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    long long low = 1;
    long long  max=piles[0];
    for (int i=1; i<piles.size();i++){
        if ( max <= piles[i]){
            max=piles[i];
        }
    }
    long long high = max;

    while (low <=high){
    long long  mid = low+(high-low)/2;
    long long  rh=0;

     for (int x: piles){ 
     if(x%mid!=0){
        rh+= x/mid+1;
     }else {
         rh+= x /mid;
     }
    } 

    if ( rh<=h ){
    high=mid-1;
    }else{
    low = mid+1;
    }
    }

    return low;

} 
    
};