class Solution {
public:
    bool canJump(vector<int>& nums) {

        int dis = nums[0];
        int i = 0;
        int s = nums.size();
        
        while(i < s){

            while(dis!=0 && nums[i]<=dis){
                i++;
                dis--;

                if(i >= (s-1)) return true;
            }
            
            dis = nums[i];

            if(dis == 0) break;

        }

        return i >= (s-1);
    }
};