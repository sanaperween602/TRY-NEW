/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val)
        : data(val)
        , left(nullptr)
        , right(nullptr) {}
};
*/
Node* ArraytoBST(vector<int>&arr,int start, int end)
{
    if(start>end)
    return nullptr;
    int mid=start+(end-start)/2;
    Node*root=new Node(arr[mid]);
    
    //left side
    root->left=ArraytoBST(arr,start,mid-1);
    //right side
   root->right= ArraytoBST(arr,mid+1,end);
    return root;
}
class Solution {
  public:
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
       
      return ArraytoBST(nums,0,nums.size()-1);
  
    }
};