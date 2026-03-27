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
    pair<int,bool> rec(TreeNode* root){
        if(root==NULL)return{0,1};
        auto it=rec(root->left);
        auto it2=rec(root->right);
        if(it.second==0||it2.second==0)return {0,0};
        else if(abs(it.first-it2.first)>1)return{0,0};
        else return {max(it.first,it2.first)+1,1};
    }
    bool isBalanced(TreeNode* root) {
        return rec(root).second;
    }
};