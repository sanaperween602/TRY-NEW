// function Template for C++

class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        // code here.
        stack<int>str;
        while(!q.empty())
        {
            str.push(q.front());
            q.pop();
        }
        while(!str.empty())
        {
            q.push(str.top());
            str.pop();
            
        }
        return q;
    }
};