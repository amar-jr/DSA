class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=1e5+5;

        int sum=0;
        int i=0,j=0;

        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
            // if(sum==target){
            //     ans=min(ans,j-i);
            // }

        }
        if(ans==1e5+5) return 0;
        return ans;
    }
};