class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_prices=INT_MAX;
        int max_profit=0;
        for(int price:prices){
            min_prices=min(min_prices,price);
            int current_profit=price-min_prices;
            max_profit=max(max_profit,current_profit);
        }
        return max_profit;
    }
};
