
class Solution {
public:
    vector<bool> vis;

    void dfs(int i, vector<vector<int>>& v) {
        vis[i] = true;

        for (auto key : v[i]) {
            if (!vis[key]) {
                dfs(key, v);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& v) {
        int n = v.size();

        vis.assign(n, false);

        dfs(0, v);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) return false;
        }

        return true;
    }
};
