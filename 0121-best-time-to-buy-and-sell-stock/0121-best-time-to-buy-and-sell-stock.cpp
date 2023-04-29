class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n=prices.size();
        int buy=INT_MAX;
        int maxProfit=INT_MIN;
        for(int i=0;i<n;i++)
        {
            buy=min(buy,prices[i]);
            maxProfit=max(maxProfit,prices[i]-buy);
        }
        return maxProfit;
    }
    
};