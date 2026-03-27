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
    pair<int,int> rec(TreeNode* root){
        if(root==NULL)return {0,0};
        pair<int,int> it1=rec(root->left);
        pair<int,int> it2=rec(root->right);
        
        return{max(it1.first,it2.first)+1,max(max(it1.second,it2.second),it1.first+it2.first )};

    }
    int diameterOfBinaryTree(TreeNode* root) {
        return rec(root).second;
    }
};