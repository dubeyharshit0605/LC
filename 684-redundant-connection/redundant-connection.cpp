class Solution {
public:
vector<vector<int>>g;
vector<int>vis;

  bool dfs(int node,int target){
    if(node==target) return true;
    vis[node]=1;

    for(auto i:g[node]){
        if(!vis[i]){
            if(dfs(i,target)) return true;
        }
    }
    return false;
  }

    vector<int> findRedundantConnection(vector<vector<int>>& e) {
        int n=e.size();
        g.assign(n+1,{});
        vis.assign(n+1,0);

        for(int i=0;i<n;i++){
              vis.assign(n+1,0);
              int u=e[i][0];
              int v=e[i][1];
              
             if (dfs(u,v)) return {u,v};
              g[u].push_back(v);
              g[v].push_back(u);
            
        }
        return {};
    }
};