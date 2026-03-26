class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        int m= grid[0].size();

        vector<long long>rowsum(n,0);
        vector<long long>colsum(m,0);

        long long total = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                total = total + grid[i][j];
                rowsum[i] = rowsum[i] + grid[i][j];
                colsum[j] = colsum[j] + grid[i][j];
            }
        }
        if(total % 2 != 0){
            return false;
        }

        long long upper = 0;
        for(int i=0;i<n-1;i++){
            upper = upper + rowsum[i];
            if(upper == total - upper){
                return true;
            }
        }

        long long left = 0;
        for(int j=0;j<m-1;j++){
            left = left + colsum[j];
            if(left == total - left){
                return true;
            }
        }
        return false;
    }
};