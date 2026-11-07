class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ptr=nums.size()-1;
        int i=0;
        while(i <= ptr){

            if(nums[ptr]==val){
                ptr--;
                continue;
            }
            if(nums[i] == val){
                swap(nums[i], nums[ptr]);
                ptr--;
            }
            i++;
        }
        return ptr+1;
    }
};