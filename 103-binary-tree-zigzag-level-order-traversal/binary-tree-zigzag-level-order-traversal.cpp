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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return {};
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        bool d=0;

        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> temp(n);
            d=!d;
            for(int i=0;i<n;i++){
                
                if(q.front()->left!=NULL){
                    q.push(q.front()->left);
                }
                if(q.front()->right!=NULL){
                    q.push(q.front()->right);
                }
                if(d){
                    temp[i]=q.front()->val;
                }
                else{
                    temp[n-1-i]=q.front()->val;
                }
                q.pop();
            }
            ans.push_back(temp);
        }

    return ans;}
};