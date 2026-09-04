
class Solution {
   
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end()) ;
        int sum=0;
        for (int i=0; i< weights.size(); i++){
            sum =sum + weights[i];
        }
        int high =sum;

        while (low <= high){
            int capacity = low +(high-low)/2 ;   
            int req_day =1;
            int curr_weight =0;
             
            for( int x: weights){         
                if (curr_weight+ x >capacity ){    
                    curr_weight = x;
                    req_day++;
                }else {
                    curr_weight=curr_weight+ x;
                }
            }

            if (req_day<=days){
                high = capacity -1;
            }else {
                low = capacity+1 ;
            }

        }
        return low ;
     
    }
};

