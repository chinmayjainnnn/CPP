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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)return{};
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        vector<int> v;
        q.push(root);
        q.push(NULL);
        v.push_back(root->val);
        ans.push_back(v);
        v.clear();
        while(!q.empty()){

            TreeNode* temp=q.front();
            
            q.pop();
            if(temp==NULL){
                if(v.size()){
                    ans.push_back(v);
                }
                v.clear();
                if(!q.empty()){
                    q.push(NULL);
                }
                continue;
            }
            // cout<<temp->val<<endl;
            // cout<<"q size"<<q.size()<<endl;
            if(temp->left){
                TreeNode* l=temp->left;
                q.push(l);
                v.push_back(l->val);
            }
            if(temp->right){
                TreeNode* r=temp->right;
                q.push(r);
                v.push_back(r->val);
            }
        }

        return ans;          
        }
};