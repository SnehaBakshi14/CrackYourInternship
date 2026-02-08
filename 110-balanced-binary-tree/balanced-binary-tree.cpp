/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root)
    {
        if(!root) return 0;

        int leftH = height(root->left);
        int rightH = height(root->right);

        return max(leftH,rightH)+1 ; // add root in height of subtree to find height so add 1
    }
    bool isBalanced(TreeNode* root) 
    {
        if(!root ) return true; // empty

        int leftH = height(root->left);
        int rightH = height(root->right);

        if(abs(leftH - rightH) > 1)return false;

        return isBalanced(root->left) && isBalanced(root->right);
        
        

        
        // TC 0(N^2);
        // SC O(1)
    }
};