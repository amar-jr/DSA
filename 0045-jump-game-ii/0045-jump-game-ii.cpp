class Solution {
public:

    int jump(vector<int>& nums) {
        int s =nums.size();
        vector<int> ans(s,INT_MAX);
        ans[0] = 0;
        
        for(int i=0; i<s; i++){
            int jumps = nums[i];
            
            for(int j = i+1; j <= jumps+i && j < s; j++){
                ans[j] = min(ans[j], ans[i]+1);
            }
        }

        return ans[s-1];
    }
};