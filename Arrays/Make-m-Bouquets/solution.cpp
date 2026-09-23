class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long size= bloomDay.size() ;
        long long minD = bloomDay[0];
        long long  maxD = bloomDay[0];
        for (int i =1; i< size;i++){
            if (minD>=bloomDay[i]){
                minD= bloomDay[i];
            }
        }
        for (int i =1; i< size;i++){
            if (maxD <=bloomDay[i]){
                maxD= bloomDay[i];
            }
        }
        long long  low = minD;
        long long  high = maxD;
        if ( 1LL*m*k > size){
            return -1;
        }else{

        while (low<= high){
            long long mid=low+(high-low)/2;
            int bouquet=0;
            int cons_day =0;
            for (int x: bloomDay){
                if (x<= mid){
                    cons_day ++;
                    if (cons_day==k){
                        bouquet++;
                        cons_day=0;
                    }
                }else {
                    cons_day=0;
                }
            }



            if (bouquet >= m){
                high= mid-1;
            }else {
                low=mid+1;
            }
        }
        return low;
        }

    }
    
};
//explaination on copy 