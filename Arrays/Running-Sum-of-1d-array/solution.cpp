class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int N = nums.size();
        vector <int> ans(N);
        ans[0]=nums[0];      // initialising the 0th index element to be same as the nums[0]  element 
        for (int i =1 ; i<N; i++){
           ans[i]=ans[i-1]+ nums[i];    //   previous of the ans as well the current nums add them 
        }
        return ans;

        
    }
};