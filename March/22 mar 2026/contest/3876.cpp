class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
            int odd = 0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2){
                odd++;
            }
        }
            int n=nums1.size();
            if(odd == 0)return true;
            int minodd = INT_MAX;
            for(int i=0;i<n;i++){
                if(nums1[i]%2){
                    minodd=nums1[i];
                break;
                }
            }
            for(int i=0;i<n;i++){
                if(nums1[i]%2 == 0){
                    if(nums1[i]<=minodd){
                        return false;
                    }
                }
            }
                return true;
    }
};