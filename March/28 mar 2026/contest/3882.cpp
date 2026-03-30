class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bitset<1024>>> dp(n, vector<bitset<1024>>(m));

        dp[0][0][grid[0][0]] = 1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0){
                continue;
                }
    int value = grid[i][j];
    bitset<1024>current;

    if(i>0){
    for(int x=0;x<1024;x++){
        if(dp[i-1][j][x]){
            current[x^value] = 1;
        }
    }
    }
    if(j>0){
    for(int x=0;x<1024;x++){
        if(dp[i][j-1][x]){
            current[x^value] = 1;
        }
    }
    }
dp[i][j] = current;

            }
        }
for(int x=0;x<1024;x++){
    if(dp[n-1][m-1][x]){
        return x;
    }
}
return -1;
    }
};