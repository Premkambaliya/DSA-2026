class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int one = -1;
        int two = -1;
        int ans =INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                one = i;
                if(two != -1){
                    ans = min(ans, abs(one - two));
                }
            }else if(nums[i] == 2){
                two = i;
                if(one != -1){
                    ans = min(ans, abs(one - two));
                }
            }
        }
        return (ans == INT_MAX) ? -1:ans;
    }
};