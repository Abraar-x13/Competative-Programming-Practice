class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int L = 0; int R = 1; int maxP = 0;
        while(R < prices.size())
        {
            if (prices[L] < prices[R])
            {
                int profitnow = prices[R] - prices[L];
                maxP = max(maxP, profitnow);
            }
            else
            {
                L = R;
            }
            R += 1;
        }
        return maxP;
    }
};