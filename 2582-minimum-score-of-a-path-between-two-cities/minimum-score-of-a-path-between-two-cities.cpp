class Solution {
public:
    vector<int> vis;
    vector<vector<int>> g;

    void dfs(int node) {
        stack<int> st;
        st.push(node);
        vis[node] = 1;

        while (!st.empty()) {
            int u = st.top();
            st.pop();

            for (auto i : g[u]) {
                if (!vis[i]) {
                    vis[i] = 1;
                    st.push(i);
                }
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        vis.assign(n + 1, 0);
        g.assign(n + 1, vector<int>());

        for (auto e : roads) {
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }

        dfs(1);

        int ans = INT_MAX;

        for (auto e : roads) {
            if (vis[e[0]]) {
                ans = min(ans, e[2]);
            }
        }

        return ans;
    }
};