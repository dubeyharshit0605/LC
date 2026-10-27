class Solution {
public:
int maxi=-1;
vector<vector<int>>g;
vector<int>vis,depth;
int cnt=0;

   void dfs(int node){
     vis[node]=1;
     depth[node]=cnt++;
     for(auto v:g[node]){
        if(vis[v]==0){
            //cnt++;
            dfs(v);
        }else if(vis[v]==1){
            maxi=max(maxi,cnt-depth[v]);
        }
     }
     vis[node]=2;
   }


    int longestCycle(vector<int>& e) {
        int n=e.size();
        g.assign(n+1,{});
        vis.assign(n+1,0);
        depth.assign(n+1,0);

        for(int i=0;i<n;i++){
            if (e[i] != -1) {
            g[i].push_back(e[i]);
            //g[e[i][1].push_back(e[i][0]);
            }
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i);
            }
        }
        return maxi;
        
    }
};