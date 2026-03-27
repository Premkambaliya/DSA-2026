class StockSpanner {
public:
    stack<pair<int, int>> st; // {price, span}

    
    int next(int price) {
        int span = 1;

        // remove all smaller or equal prices
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }

        // push current price with its span
        st.push({price, span});

        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */