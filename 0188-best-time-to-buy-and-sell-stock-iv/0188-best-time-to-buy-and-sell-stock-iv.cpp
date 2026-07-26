class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<int>buy(k,INT_MAX);
        vector<int>sell(k,0);
        for(auto prise:prices){
            buy[0]=min(buy[0],prise);
            sell[0]=max(sell[0],prise-buy[0]);
            for(int i=1;i<k;i++){
                buy[i]=min(buy[i],prise-sell[i-1]);
                sell[i]=max(sell[i],prise-buy[i]);
            }
        }
    return sell[k-1];
    }
};

