// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        int prev1=0;
        int prev2=1;
        int curr=0;
        for(int i=2;i<=n;i++)
        {
            curr=prev1+prev2;
            prev1=prev2;
            prev2=curr;
        }
        return curr;
    }
};