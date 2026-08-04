class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;

        int val=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==val) continue;

            nums[j]=nums[i];
            val=nums[j];
            j++;
        }
        return j;
    }
};