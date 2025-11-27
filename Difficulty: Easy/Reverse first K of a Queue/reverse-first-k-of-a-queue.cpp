class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int>st;
        int n=q.size();
        if(k>n)
        return q;
        for(int i=0;i<k;i++)
        {
            st.push(q.front());
            q.pop();
        }
        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        int element=q.size()-k;
        while(element--)
        {
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};