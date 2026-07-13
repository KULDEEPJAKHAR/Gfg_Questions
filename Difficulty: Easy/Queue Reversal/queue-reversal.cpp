class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        if(q.empty())return;
        int top = q.front();
        q.pop();
        reverseQueue(q);
        q.push(top);
    }
};