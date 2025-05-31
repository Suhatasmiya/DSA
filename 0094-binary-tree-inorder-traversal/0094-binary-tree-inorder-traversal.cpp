class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        dfs(root, res);
        return res;
    }

    void dfs(TreeNode* root,vector<int>& res){
        if(!root) return;
        dfs(root->left,res);
        res.push_back(root->val);
        dfs(root->right,res);
    }
};