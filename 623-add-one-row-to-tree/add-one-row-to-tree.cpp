
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {

        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }

        queue<TreeNode*> q;
        q.push(root);

        int level = 1;

        while (!q.empty()) {
            int n = q.size();

            while (n--) {
                TreeNode* node = q.front();
                q.pop();

                if (level == depth - 1) {
                    TreeNode* oldLeft = node->left;
                    TreeNode* oldRight = node->right;

                    node->left = new TreeNode(val);
                    node->right = new TreeNode(val);

                    node->left->left = oldLeft;
                    node->right->right = oldRight;
                }
                else {
                    if (node->left)
                        q.push(node->left);

                    if (node->right)
                        q.push(node->right);
                }
            }

            if (level == depth - 1)
                break;

            level++;
        }

        return root;
    }
};
