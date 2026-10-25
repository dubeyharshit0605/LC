
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);

        vector<pair<long long, int>> v;
        int l = 1;

        while(!q.empty()) {
        int n = q.size();
        long long sum = 0;

            while(n--) {
                TreeNode* node = q.front();
                q.pop();

                sum += node->val;

                if(node->left) {
                    q.push(node->left);
                }

                if(node->right) {
                    q.push(node->right);
                }
            }

            v.push_back({sum, l});
            l++;
        }

        sort(v.rbegin(), v.rend());

        if(v.size() < k) {
            return -1;
        }

        return v[k-1].first;
    }
};
