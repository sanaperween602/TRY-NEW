class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        //trans
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
        
        swap(mat[i][j],mat[j][i]);
        }
        //reverse  top & bottom
        for(int j=0;j<n;j++)
        {
        int top=0;
        int bottom=n-1;
        while(top<bottom)
        {
            swap(mat[top][j],mat[bottom][j]);
            top++;
            bottom--;
        }
        }
    }
};
