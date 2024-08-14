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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> mp;
        queue< pair<TreeNode*,int> > q;
        int level=0;

        q.push({root,0});
        
        while(!q.empty()){
            int n=q.size(),pos;
            TreeNode *left,*right,*cur;

            

            for(int i=0;i<n;i++){
                cur=q.front().first;
                left=cur->left;
                right=cur->right;
                pos=q.front().second;
                if(left!=NULL)
                    q.push({left,pos-1});
                if(right!=NULL)
                    q.push({right,pos+1});
                // cout<<cur->val<<endl;
                mp[pos][level].insert(cur->val);
                q.pop();
                
            }
            level++;
            }
            vector<vector<int>> ans;
            for(auto i:mp){
                vector<int> temp;
                for(auto j:i.second){
                    for(auto k:j.second){
                        temp.push_back(k);
                    }

                }
                ans.push_back(temp);
            }

            return ans;
    }
};