// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        stack<string>s;
        for(int i=0;i<arr.size();i++)
        {
            if(s.empty())
            s.push(arr[i]);
            //what if they are equal 
            else if (s.top()==arr[i])
            {
                s.pop();
            }
            //if not equal
            else
            s.push(arr[i]);
        }
        return s.size();
    }
};