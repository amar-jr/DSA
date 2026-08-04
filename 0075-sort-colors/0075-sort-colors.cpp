class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3);

        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }

        int cnt=0;
        for(int i=0;i<count.size();i++){
            while(count[i]>0){
                nums[cnt++]=i;
                count[i]-=1;
            }
        }
    }
};