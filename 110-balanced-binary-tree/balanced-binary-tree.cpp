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
    pair<int,bool> bb(TreeNode* root){
        if(root==NULL)return {0,true};
        pair<int,bool> l,r;
        l=bb(root->left);
        r=bb(root->right);
        if(l.second==false || r.second==false || abs(l.first-r.first)>1){
            return {0,false};
        }
        
        return {1+max(l.first,r.first),true};
        
    }
        
    
    bool isBalanced(TreeNode* root) {
        pair<int,bool> n;
        n=bb(root);
        return n.second;
        
    }
};