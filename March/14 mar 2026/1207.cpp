class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;

        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }

        unordered_set<int> result;
        for(auto it = freq.begin(); it != freq.end(); it++){
            int frequency = it->second;
            result.insert(frequency);
        }

        if(result.size() == freq.size()){
            return true;
        }
        else{
            return false;
        }
    }
};