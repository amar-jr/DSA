class Solution {
public:
    int hIndex(vector<int>& nums) {
        
        vector<int> citationCount(5001, 0);

        int s = nums.size();
        for(int i = 0; i < s; i++){
            citationCount[nums[i]]++;
        }
        int value=0;
        for(int i = citationCount.size()-1; i >= 0; i--){
            if(citationCount[i]+ value >= i) return i;
            else{
                value+= citationCount[i];
            }
        }
        return 0;
    }
};