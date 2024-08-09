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
        queue<TreeNode*> qu;
        int n=1,size=1;
        vector<vector<int>> ans;

        qu.push(root);
        while(!qu.empty()){
            vector<int> vec;
            for(int i=0;i<n;i++){
                
                TreeNode* temp;
                temp=qu.front();
                if(temp!=NULL){
                    vec.push_back(temp->val);
                    qu.push(temp->left);
                    qu.push(temp->right);
                    size++;
                    qu.pop();
                    // cout<<"1"<<" ";
                }
                else{
                    size--;
                    qu.pop();
                    // cout<<"2"<<" ";
                } 
                // cout<<size<<" "<<i<<endl;
            }
            n=size;
            if(vec.size()!=0){
                ans.push_back(vec);
            }
            
        }

    return ans;
    }
};