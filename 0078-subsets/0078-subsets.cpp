class Solution {
public:
    void solve(vector<int>& arr, vector<vector<int>>& ans, vector<int>& temp, int s,int i=0){
        if(i==s){
            ans.push_back(temp);
            return;
        }
        solve(arr,ans,temp,s,i+1);
        temp.push_back(arr[i]);
        solve(arr,ans,temp,s,i+1);
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums,ans,temp,nums.size());
        return ans;
    }
};