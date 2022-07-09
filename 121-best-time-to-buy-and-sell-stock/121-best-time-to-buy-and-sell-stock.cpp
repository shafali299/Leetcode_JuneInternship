class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minprices=INT_MAX,maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            minprices=min(minprices,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minprices);
        }
        return maxprofit;
    }
};