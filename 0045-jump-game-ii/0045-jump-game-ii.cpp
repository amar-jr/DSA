class Solution {
public:

    int jump(vector<int>& nums) {

        // int s =nums.size();
        // vector<int> ans(s,INT_MAX);
        // ans[0] = 0;
        
        // for(int i=0; i<s; i++){
        //     int jumps = nums[i];
            
        //     for(int j = i+1; j <= jumps+i && j < s; j++){
        //         ans[j] = min(ans[j], ans[i]+1);
        //     }
            
        // }

        // return ans[s-1];
        

        if(nums.size()==1 || nums[0]==0) return 0;

        int s = nums.size();
        int farthest = 0;
        int range = 0;
        int jumps = 0;
        for(int i = 0; i < s; i++){
            farthest = max(farthest, i+nums[i]);

            if(range == i){
                jumps++;
                range = farthest;

                if(range >= (s-1)) break;

            }
        }
        return jumps;

    }
};