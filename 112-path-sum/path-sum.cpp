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
    bool sumi(TreeNode* root, int sum){
        if(root->val==sum && root->left==NULL && root->right==NULL)return 1;
        if(root->val!=sum && root->left==NULL && root->right==NULL)return 0;
        bool l=0,r=0;
        if(root->left!=NULL )l=sumi(root->left,sum-(root->val));
        if(root->right!=NULL)r=sumi(root->right,sum-(root->val));
        
        
        return l|| r;
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if( root==NULL) return 0;
    return sumi(root,sum);
    }
};