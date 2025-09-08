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
    int search(int val,vector<int>& inOrder,int left,int right){
        for(int i=left;i<=right;i++){
            if(inOrder[i]==val) return i;

        }
        return -1;

    }
    TreeNode* helper(vector<int>& preOrder, vector<int>& inOrder,int &preIdx,int left, int right){
        if(left>right) return NULL;
        TreeNode* root= new TreeNode(preOrder[preIdx]);
        
        int inIdx=search(root->val,inOrder,left,right);
        preIdx++;
        root->left=helper(preOrder,inOrder,preIdx,left,inIdx-1);
        root->right=helper(preOrder,inOrder,preIdx,inIdx+1,right);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIdx=0;
       return helper(preorder,inorder,preIdx,0,inorder.size()-1);
        
    }
};