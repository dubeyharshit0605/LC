
class Solution {
public:
    int res = 0;

    int dfs(TreeNode* root) {
        if (!root) return 0;

        int l = dfs(root->left);
        int r = dfs(root->right);

        res = max(res, l + r);

        return 1 + max(l, r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        dfs(root);

        return res;
    }
};
