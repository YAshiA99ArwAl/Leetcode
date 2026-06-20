class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minnum = prices[0], maxprofit = 0;
        for(int price : prices){
            minnum = min(price, minnum);
            maxprofit = max(maxprofit, price-minnum);
        }
        return maxprofit;
        
    }
};