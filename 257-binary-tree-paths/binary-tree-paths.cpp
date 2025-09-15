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
    void allPath(vector<string> &ans,string path,TreeNode* root){
        if(root->left==NULL && root->right==NULL){
            ans.push_back(path);
            return;
        }
        if(root->left) allPath(ans,path+"->"+to_string(root->left->val),root->left );
        if(root->right) allPath(ans,path+"->"+to_string(root->right->val),root->right );
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path=to_string(root->val);
         allPath(ans,path,root);
         return ans;
        
    }
};