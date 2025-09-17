class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int x = 0, y = 0, z = 0;  // counts of 0,1,2

        // count
        for(int i=0; i<n; i++) {
            if(arr[i]==0) x++;
            else if(arr[i]==1) y++;
            else z++;
        }
        
        int ans[n];
        int index = 0;

        for(int i=0; i<x; i++) ans[index++] = 0;
        for(int i=0; i<y; i++) ans[index++] = 1;
        for(int i=0; i<z; i++) ans[index++] = 2;

        for(int i=0; i<n; i++) arr[i] = ans[i];
    }
};
