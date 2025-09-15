// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
        
        swap(mat[i][j],mat[j][i]);
        }
        //reverse
        for(int i=0;i<n;i++)
        {
        int start=0;
        int end=mat.size()-1;
        while(start<end)
        {
            swap(mat[i][start],mat[i][end]);
            start++;
            end--;
        }
        }
}
