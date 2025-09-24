class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int count =0;
        for(int i=n;i>0;i=i/10)
        {
         
         count++;
        }
        return count;
    }
};