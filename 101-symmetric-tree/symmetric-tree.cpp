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
    bool sym(TreeNode* a,TreeNode* b){
        if(a==NULL && b==NULL)return true;
        if(a==NULL || b==NULL)return false;
        if(a->val==b->val){
            bool l=sym(a->left,b->right);
            bool r=sym(a->right,b->left);
            if(l==true && r==true)
                return true;
        }
        return false;

    }
    bool isSymmetric(TreeNode* root) {
        return sym(root->left,root->right);
    }
};