class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3) return nums.size();
        int ptr=0;
        int count=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[ptr]!=nums[i]){
                ptr++;
                nums[ptr] = nums[i];
                count=0;
            }
            else if(nums[ptr]== nums[i]){
                if(count<1){
                    ptr++;
                    nums[ptr]= nums[i];
                } 
                count++;
            }
        }
        return ptr+1;
    }
};