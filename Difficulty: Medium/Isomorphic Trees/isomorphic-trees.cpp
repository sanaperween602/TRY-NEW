/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *r1, Node *r2) {
        // add code here.
        if(r1==NULL&&r2==NULL)
        
        {return true;}
        if(r1==NULL||r2==NULL)
        {return false;}
        if(r1->data!=r2->data)
        {return false;}
        bool noswap= isIsomorphic(r1->left,r2->left)&&isIsomorphic(r1->right,r2->right);
        bool swap=isIsomorphic(r1->left,r2->right)&&isIsomorphic(r1->right,r2->left);
        return noswap||swap;
    }
};