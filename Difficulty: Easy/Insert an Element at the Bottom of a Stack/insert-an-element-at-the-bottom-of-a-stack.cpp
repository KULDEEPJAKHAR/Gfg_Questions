class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        if(st.empty()){
            st.push(x);
            return st;
        }
        int top = st.top();
        st.pop();
        st=insertAtBottom(st,x);
        st.push(top);
        return st;
    }
};