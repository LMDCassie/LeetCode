/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int size=prices.size();
        for(int i=0;i<size-1;i++){
            if(prices[i]<prices[i+1]){
                int profit=prices[i+1]-prices[i];
                res+=profit;
            }
        }
        return res;
    }
};
//可以无限次购买股票，所以把利润加起来就是最后答案
// @lc code=end

