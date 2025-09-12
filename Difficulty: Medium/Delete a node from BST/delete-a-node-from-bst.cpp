/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    Node *deleteNode(Node *root, int target) {
        // code here
        if(!root)
        return NULL;
        if(root->data>target)
        {
        root->left=deleteNode(root->left,target);
        
            return root;
        }
        if(root->data<target)
        {
        root->right=deleteNode(root->right,target);
        
            return root;
        }
        if(!root->left && !root->right)
       {
       delete root;
        return NULL;
       }
       //if 1 child 
      else if(!root->right)//left exist
       {
           Node*temp=root->left;
           delete root;
           return temp;
       }
       else if(!root->left)//right exist
       {
           Node*temp=root->right;
           delete root;
           return temp;
       }
       //2 exist
       else{
           Node*child=root->left;
           Node*parent=root;
           while(child->right)
           {
               parent=child;
               child=child->right;
           }
           if(root!=parent)
           {
               parent->right=child->left;
               child->left=root->left;
               child->right=root->right;
               delete root;
               return child;
           }
           else
           {
               child->right=root->right;
               delete root;
               return child;
           }
       }
    }
};