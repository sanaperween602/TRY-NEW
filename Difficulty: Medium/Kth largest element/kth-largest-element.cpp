class Solution {
  public:
    // Function to return kth largest element from an array.
    int KthLargest(vector<int> &arr, int k) {
        // Your code here
        int n=arr.size();
        
        priority_queue<int, vector<int>, greater<int>> p;
       for(int i=0;i<n;i++)
       {
           p.push(arr[i]);
           if(p.size()>k)
           p.pop();
       }
        return p.top();
        
    }
};