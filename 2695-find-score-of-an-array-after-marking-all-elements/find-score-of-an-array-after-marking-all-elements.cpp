class Solution {
public:
using ll=long long;
    long long findScore(vector<int>& arr) {
        priority_queue<pair<int,int>>q;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            q.push({-arr[i],-i});
        }
        ll sum=0;
        vector<int>vis(n+1,0);
        while(!q.empty()){
        if(vis[-q.top().second]!=1){
        sum=sum-q.top().first;
        int x=-q.top().second;
        if(x==0){
          vis[1]=1;
        }else if(x==n-1){
            vis[n-2]=1;
        }else{
            vis[x-1]=1;
            vis[x+1]=1;
        }
        q.pop();

        }else{
            q.pop();
        }
        }
        return sum;
        

    }
};