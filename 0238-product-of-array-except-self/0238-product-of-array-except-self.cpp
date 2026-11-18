class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =  nums.size();
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);

        int product = 1, back=1;
        for(int i = 0; i<n ;i++){
            product *= nums[i];
            back *= nums[n-i-1];
            prefix[i] = product;
            suffix[n-i-1] = back;
        }

        vector<int> ans(n,1);

        for(int i = 0; i<n ;i++){
            if(i+1 < n){
                ans[i] *= suffix[i+1];
            }
            if(i-1 >= 0){
                ans[i] *= prefix[i-1];
            }
        }
        return ans;
    }
};