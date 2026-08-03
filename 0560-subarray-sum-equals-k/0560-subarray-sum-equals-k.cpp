class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()==1){
            return nums[0]==k;
        }
        int count=0;

        unordered_map<int,int> store;

        // for(int i=1;i<nums.size();i++){
        //     nums[i]+=nums[i-1];
            
        // }
        store[0]=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            if(store.find(sum-k)!=store.end()){
                count+=store[sum-k];
            }
            store[sum]++;
        }
        return count;

    }
};