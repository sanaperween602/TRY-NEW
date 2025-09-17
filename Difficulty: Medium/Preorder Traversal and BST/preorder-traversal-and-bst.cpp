// User function Template for C++

class Solution {
  public:
    int canRepresentBST(int arr[], int N) {
        // code here
        stack<int>lower,upper;
        lower.push(INT_MIN);
        upper.push(INT_MAX);
        int left;
        int right;
        for(int i=0;i<N;i++)
        {
            if(arr[i]<lower.top())
            return 0;
            while(arr[i]>upper.top())
            {
                lower.pop();
                upper.pop();
            }
            left=lower.top();
            right=upper.top();
            lower.pop();
            upper.pop();
            //right
            lower.push(arr[i]);
            upper.push(right);
            //left
            lower.push(left);
            upper.push(arr[i]);
        }
        return 1;
    }
};