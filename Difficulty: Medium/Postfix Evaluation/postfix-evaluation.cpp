class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<long long>st;
        for(int i=0;i<arr.size();i++)
        {
            string x=arr[i];
            
            if(x=="+"||x=="*"||x=="-"||x=="/"||x=="^")
            {
                long long b=st.top();
                st.pop();
                long long a=st.top();
                st.pop();
                if(x=="+") 
                st.push(a+b);
                else if(x=="-")
                st.push(a-b);
                else if(x=="*")
                st.push(a*b);
                else if(x=="/")
                {
                if(a*b<0 && a%b!=0)
                  st.push((a/b)-1);
                else
                   st.push(a/b);
                }
                 else if(x=="^")
                 st.push(pow(a,b));
            }
            else {
            st.push(stoll(x));
            }
        }
        
         return st.top();
            
    }
};