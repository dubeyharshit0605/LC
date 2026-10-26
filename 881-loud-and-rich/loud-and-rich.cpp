
class Solution {
public:
    vector<vector<int>> g;
    vector<int> vis;
    vector<int> ans;

    void dfs(int node, int src, vector<int>& quiet) {
        vis[node] = 1;

        for (auto i : g[node]) {
            if (!vis[i]) {

                if (quiet[src] < quiet[ans[i]]) {
                    ans[i] = src;
                }

                dfs(i, src, quiet);
            }
        }
    }

    vector<int> loudAndRich(vector<vector<int>>& e,
                            vector<int>& quiet) {
        int n = quiet.size();

        g.assign(n, {});
        vis.assign(n, 0);
        ans.resize(n);

        for (int i = 0; i < n; i++) {
            ans[i] = i;
        }

        for (auto i : e) {
            g[i[0]].push_back(i[1]);
        }

        for (int i = 0; i < n; i++) {
            vis.assign(n, 0);
            dfs(i, i, quiet);
        }

        return ans;
    }
};
