class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit;
        int maxp=0;
        int mini=INT_MAX;
        int i=0;
        if(prices.size()==0)return 0;

        while(i< prices.size() )
        {if(prices[i]< mini)
        {mini=prices[i];

        }
            profit=prices[i]-mini;
maxp=max(maxp,profit);
i++;

        }
        return maxp;
        

        
    }
};
