class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int N = 2*n;              // new vector size will ne 2 times of n 
        vector <int> ans(N);          // creating a new vector of int  so that we can save the dynamic array 
        for (int i =0; i<N;i++){
            if (0<=i && i<n){              // if   0<=i <n then put the values same as that 
            ans [i]=nums[i];
            }
            if( n<= i && i< N){                   // if n<=i<N then ans [i] will be the nums[i-n]  matlab ki  starting sai traverse karo aur usko ans[i] mai dal do 
            ans[i]=nums[i-n];                         // in question we r given with the ans[i + n] == nums[i] so i thought from there 
            } 
        }   
        return ans;
    }
};