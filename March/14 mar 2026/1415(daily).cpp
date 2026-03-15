class Solution {
public:
    string answer = "";
    int count = 0;

    void solve(int n, int k,string current){
        if(current.length() == n){
            count++;
            if(count == k){
                answer = current;
            }
            return;
        }
        for(char i ='a'; i <= 'c'; i++){
            if(current.length() > 0 && current.back() == i){
                continue;
            }
            solve(n, k, current + i);
        }
    }
    string getHappyString(int n, int k) {
        solve(n,k,"");
        return answer; 
    }
};