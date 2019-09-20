/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows,vector<int>());
        for(int i=0;i<numRows;i++){
            res[i].resize(i+1,1);//resize既修改capacity大小，也修改size大小，(容器大小,初始值)
            for(int j=1;j<i;j++){
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
        return res;
    }
};

