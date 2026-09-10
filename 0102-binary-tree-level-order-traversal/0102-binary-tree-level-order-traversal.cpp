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
private:
    void level(TreeNode* node, vector<vector<int>>&traversal,queue<TreeNode*>&q){
        q.push(node);
        while(!q.empty()){
            vector<int>temp;
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode* currnode= q.front();
                q.pop();
                if(currnode->left){
                    q.push(currnode->left);
                }
                if(currnode->right){
                    q.push(currnode->right);
                }
                temp.push_back(currnode->val);
            }
            traversal.push_back(temp);
        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL){
            return ans;
        }
        queue<TreeNode*>q;
        level(root, ans, q);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna