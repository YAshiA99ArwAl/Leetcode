class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minnum = prices[0], maxprofit = 0;
        for(int i=1; i<n; i++){
            if(prices[i] < minnum){
                minnum = prices[i];
            }
            if(prices[i] - minnum > maxprofit){
                maxprofit = prices[i] - minnum;
            }
        }
        return maxprofit;
        
    }
};