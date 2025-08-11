class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n=stalls.size();
         sort(stalls.begin(),stalls.end());
        int start=1;
        int mid,ans;
        int end=stalls[n-1]-stalls[0];
       
        while(start<=end)
        {
           mid=start+(end-start)/2;
           int count=1;
           int pos=stalls[0];
        
           for(int i=1;i<n;i++)
           {
               if(stalls[i]-pos>=mid)
               {
               count++;
               pos = stalls[i];
               }
           }
        
        
        if(count<k)
       {
          end=mid-1;
       }
       else
       {
            ans=mid;
           start=mid+1;
       
       }
        }
        
        return ans;
    }
};