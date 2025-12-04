/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
      void inOrder(Node*node,vector<int>&ans){
            if(node==NULL)
            return ;
            inOrder(node->left,ans);
            ans.push_back(node->data);
            inOrder(node->right,ans);
        }
    bool isBST(Node* root) {
        // code here
    
        vector<int>ans;
        inOrder(root,ans);
        // for(int i=0;i<ans.size();i++)
        // {
        //     if(ans[i]<ans[i+1])
        //     return true;
        // }
        // return false;
        
        for( int i = 1 ; i < ans.size() ; i++ ){
            if( ans[i-1] > ans[i] ) 
                return false; 
        }
        return true ;
        
    }
};