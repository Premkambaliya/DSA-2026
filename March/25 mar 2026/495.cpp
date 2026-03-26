class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size() - 1;
        int total = 0;

        for(int i=0;i<n;i++){
            total = total + min(duration, timeSeries[i+1] - timeSeries[i]);
        }
        return total + duration;
    }
};