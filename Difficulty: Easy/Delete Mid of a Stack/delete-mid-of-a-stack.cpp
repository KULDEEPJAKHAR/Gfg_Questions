class Solution {
public:
    void solve(stack<int>& st, int k) {
        if (k == 0) {
            st.pop();      // delete middle
            return;
        }

        int x = st.top();
        st.pop();

        solve(st, k - 1);

        st.push(x);
    }

    void deleteMid(stack<int>& st) {
        int k = st.size() / 2;
        solve(st, k);
    }
};