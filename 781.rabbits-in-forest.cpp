/*
 * @lc app=leetcode id=781 lang=cpp
 *
 * [781] Rabbits in Forest
 */

// @lc code=start
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int res=0;
        vector<int>cnt(999,0);
        for(int ans:answers)cnt[ans]=(cnt[ans]+1)%(ans+1);
        for(int i=0;i<1000;i++){
            if(cnt[i]!=0)res+=i+1-cnt[i];
        }
        return res+answers.size();

    }
};
// @lc code=end

