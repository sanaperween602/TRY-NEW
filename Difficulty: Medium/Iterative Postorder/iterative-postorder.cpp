// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* node) {
        // code here
        //NODE RIGHT LEFT(NRL)THEN REVERSE--->LNR 
        stack<Node*>s1;
        s1.push(node);
        vector<int>ans;
        while(!s1.empty())
        {
            Node*temp=s1.top();
            s1.pop();
            ans.push_back(temp->data);
            //left
            if(temp->left)
            {
                s1.push(temp->left);
                
            }
            //right
            if(temp->right)
            {
                s1.push(temp->right);
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};