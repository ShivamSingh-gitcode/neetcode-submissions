class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int current = prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<current){
               current = prices[i];
            }
                profit = max(profit,prices[i]-current);
        }
        return profit;
    }
};
