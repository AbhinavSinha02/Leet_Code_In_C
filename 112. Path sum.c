/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool hasPathSum(struct TreeNode* root, int targetSum) {
    // If the root is NULL, there can't be any path, so return false
    if (root == NULL) {
        return false;
    }
    
    // Subtract the value of the current node from targetSum
    targetSum -= root->val;
    
    // If we reach a leaf node (no children), check if the remaining targetSum is 0
    if (root->left == NULL && root->right == NULL) {
        return (targetSum == 0);
    }
    
    // Otherwise, continue to check the left and right subtrees
    return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
}
