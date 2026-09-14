class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size()-1;
        while (low<=high){
            int mid = low +(high-low)/2;
            if(mid!=0 && mid !=arr.size()-1){
            if (arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }else if (arr[mid-1]<arr[mid]&& arr[mid]<arr[mid+1]){
                low = mid+1;
            }else {
                high=mid;
            }
        }
        }
        return 0;
    }
};


// here we may see that  we have to find the peak elemenet  ... (similar like 162) where we have to check one element earlier and one element after the mid ..... if found return mid ..... else  if its like 1<2<3 then that means the peak will lie on right so move low 

// here i understand that we have to make sure about the mid index not getting -1 , n 