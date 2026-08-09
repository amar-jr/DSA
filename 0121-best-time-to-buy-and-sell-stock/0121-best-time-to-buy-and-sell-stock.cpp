class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();

        int ans=0;
        int temp=10e4+1;
        for(int i=0;i<n;i++){
            if(arr[i]<temp)
            {
                temp=arr[i];
            }
            else if(temp!=10e4+1){
                ans=max(ans, arr[i]-temp);
            }
        }
            return ans;
    }
};