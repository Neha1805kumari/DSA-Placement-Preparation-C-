class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0;
        int high = nums.size()-1;
        while (low <=high ){                         
            int mid = low + (high-low)/2;
            if (nums[mid]==target ){                       // what if mid ekement is ==target 
                return mid;
            }else if (nums[low]<=nums[mid] ){                 //checking is left half sorted  
                if (nums[low]<= target && target <= nums[mid]){              // as well the target should be present in left half 
                    high = mid-1;                                                          // keep the left half .... means high sifted to mid-1; 
                }else{
                    low = mid +1;                                                        // else discard left and move low to mid +1;
                }
            }else if (nums[mid]<=nums[high]) {                         //similar here 
                if (nums[mid]<=target &&target <= nums[high]){
                    low = mid+1;
                }else {
                    high =mid-1;
                }
                
            }   
        }
        return -1;
    }
};
