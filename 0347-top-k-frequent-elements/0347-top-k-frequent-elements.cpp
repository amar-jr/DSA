class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> store;

        unordered_map<int,int> freq;

        for(auto &num:nums){
            freq[num]++;
        }

        for(auto &it:freq){
            store.push({it.second, it.first});
            if(store.size()>k){
                store.pop();
            }
        }
        vector<int> ans;

        while(!store.empty()){
            ans.push_back(store.top().second);
            store.pop();
        }
        return ans;
    }
};