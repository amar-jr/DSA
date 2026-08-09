class Solution {
public:
    void sortColors(vector<int>& nums) {
        // vector<int> count(3);

        // for(int i=0;i<nums.size();i++){
        //     count[nums[i]]++;
        // }

        // int cnt=0;
        // for(int i=0;i<count.size();i++){
        //     while(count[i]>0){
        //         nums[cnt++]=i;
        //         count[i]-=1;
        //     }
        // }

        int i=0,j=0,e=nums.size()-1;

        while(j<=e){
            if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[j]==1) j++;
            else{
                swap(nums[j],nums[e]);
                e--;
            }
        }
    }
};