class Solution {
public:
    int minRemovals(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int,int>dp;
        dp[0] = 0;

        for(int num:nums){
            auto new_dp=dp;
            for(auto&it:dp){
                int x = it.first;
                int cnt = it.second;
                int newxor = x ^ num;
                new_dp[newxor] = max(new_dp[newxor],cnt+1);
            }
            dp = new_dp;
        }
        if(dp.find(target) == dp.end()){
            return -1;
        }
        return n-dp[target];
    }
};