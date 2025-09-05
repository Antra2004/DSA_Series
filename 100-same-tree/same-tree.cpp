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
    bool isSameTree(TreeNode* root, TreeNode* subRoot){
        if(root==NULL||subRoot==NULL) return subRoot==root;
        bool isLeftSame=isSameTree(root->left,subRoot->left);
        bool isRightSame=isSameTree(root->right,subRoot->right);
        return isLeftSame&& isRightSame&& root->val==subRoot->val;
    }
};