class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        
        vector <int> ans(n);           // we are initialy creating a vector of size n ... in future it will change its value dynamic but for now its n size
        stack <int> st;

         for (int i = n-1; i>= 0; i-- ){
            while (!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }

            if (st.empty()){
                ans[i]=-1;  
            }else {
                ans[i]=st.top();
            }

            st.push(nums2[i]);
        }
        unordered_map<int,int> mp;
        for (int i=0 ; i<n ; i++){
             mp[nums2[i]] = ans[i];
        }
        
        vector<int> final_ans;             // this means we are creating an empty vector  
        for (int x : nums1){
            final_ans.push_back(mp[x]);
        }
        return final_ans;
        
    }
};



//here i have new concept of map ... i will explain in detail in the copy and this question sol as well 