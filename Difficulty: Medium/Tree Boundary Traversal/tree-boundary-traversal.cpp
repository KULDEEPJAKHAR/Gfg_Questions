/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isLeaf(Node *root){
        return (root->left == NULL && root->right == NULL);
    }
    void traverseLeft(Node *root, vector<int> &ans){
        if(root == NULL || isLeaf(root))
            return;
        ans.push_back(root->data);
        
        if(root->left)
            traverseLeft(root->left, ans);
        else
            traverseLeft(root->right, ans);
    }
    void traverseLeaf(Node *root, vector<int> &ans){
        if(root == NULL)
            return;
        if(isLeaf(root)){
            ans.push_back(root->data);
            return;
        }
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }
    void traverseRight(Node *root, vector<int> &ans){
        if(root == NULL || isLeaf(root))
            return;
        if(root->right)
            traverseRight(root->right, ans);
        else
            traverseRight(root->left, ans);
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;
        
        if(root == NULL)
            return ans;
        ans.push_back(root->data);
        if(isLeaf(root))
            return ans;
        traverseLeft(root->left, ans);
        traverseLeaf(root, ans);
        traverseRight(root->right, ans);
        return ans;
    }
};