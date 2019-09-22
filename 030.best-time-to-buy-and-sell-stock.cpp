/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int pro=0;
        for(int price:prices){
            buy=min(buy,price);
            pro=max(pro,price-buy);
        }
        return pro;
    }
};


