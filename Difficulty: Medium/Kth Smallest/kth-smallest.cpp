class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        priority_queue<int>p;
        for(int i=0;i<n;i++)
        {
            int x=arr[i];
            p.push(arr[i]);
            if(p.size()>k)
            p.pop();
        }
        return p.top();
    }
};