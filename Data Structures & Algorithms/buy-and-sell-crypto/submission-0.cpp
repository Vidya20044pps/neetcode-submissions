class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0];
        int profit = 0;
        for(int i = 1;i<prices.size();i++){
            profit = max((prices[i]-minp),profit);
            minp = min(prices[i],minp);
        }
        return profit;
    }
};
