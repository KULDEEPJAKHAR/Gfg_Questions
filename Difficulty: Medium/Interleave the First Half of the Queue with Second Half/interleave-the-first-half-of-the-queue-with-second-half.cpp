class Solution {
public:
    void rearrangeQueue(queue<int>& q) {
        int n = q.size();
        queue<int> first;

        for (int i = 0; i < n / 2; i++) {
            first.push(q.front());
            q.pop();
        }

        queue<int> ans;

        while (!first.empty()) {
            ans.push(first.front());
            first.pop();

            ans.push(q.front());
            q.pop();
        }

        q = ans;
    }
};