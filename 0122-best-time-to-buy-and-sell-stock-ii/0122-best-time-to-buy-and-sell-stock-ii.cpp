class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int price = prices[0];
        int s=prices.size();
        int ans=0;
        for(int i=1 ; i<s; i++){
            if(prices[i] <= price){
                price = prices[i];
            }
            else {
                if(i+1<s && prices[i+1] > prices[i]){
                    continue;
                }
                ans = ans+ (prices[i] - price);
                // profit=0;
                price=INT_MAX;
            }
        }
        return ans;
    }
};