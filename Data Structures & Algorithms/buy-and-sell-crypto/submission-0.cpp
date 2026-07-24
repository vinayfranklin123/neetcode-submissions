class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minb = prices[0];

        for (int& sell : prices) {
            profit = max(profit, sell - minb);
            minb = min(minb, sell);
        }

        return profit;
    }
};
