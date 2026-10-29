class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bP = prices[0];
        int maxProfit = 0;
        for(int i = 1; i<prices.size(); i++){
            if(prices[i] < bP){
                bP = prices[i];
            }
            int currP = prices[i] - bP;
            maxProfit = max(maxProfit, currP);
        }

        return maxProfit;
    }
};