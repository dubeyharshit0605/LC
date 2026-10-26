
class Solution {
public:
    vector<vector<int>> g;
    vector<int> vis;
    vector<bool> ans;
    vector<vector<int>> pre;

    void dfs(int node, int src) {
        vis[node] = 1;

        for (auto i : g[node]) {
            if (!vis[i]) {
                pre[src][i] = 1;
                dfs(i, src);
            }
        }
    }

    vector<bool> checkIfPrerequisite(
        int numCourses,
        vector<vector<int>>& e,
        vector<vector<int>>& q) {

        int n = numCourses;

        g.assign(n, {});
        vis.assign(n, 0);
        pre.assign(n, vector<int>(n, 0));
        ans.clear();

        for (auto i : e) {
            g[i[1]].push_back(i[0]);
        }

        for (int i = 0; i < n; i++) {
            vis.assign(n, 0);
            dfs(i, i);
        }

        for (int i = 0; i < q.size(); i++) {
            if (pre[q[i][1]][q[i][0]] == 1) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};
