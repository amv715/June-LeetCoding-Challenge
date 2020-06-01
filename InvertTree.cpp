/*
 Invert a binary tree.

    Example:

    Input:

         4
       /   \
      2     7
     / \   / \
    1   3 6   9
    
    Output:

         4
       /   \
      7     2
     / \   / \
    9   6 3   1
 */

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) //base condition
        {
            return root;
        }
        //store left child in temporary variable
        TreeNode* temp = root->left;
        //swap child nodes
        root->left = root->right;
        root->right = temp;
        
        //recursively invert both left and right subtrees to create a fully inverted tree
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
       
        return root;
        
    }
};
