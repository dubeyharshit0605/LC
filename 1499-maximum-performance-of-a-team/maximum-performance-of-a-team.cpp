class Solution {
public:
using ll=long long;
const ll mod=1e9+7;
    int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({e[i],s[i]});
        }
        sort(v.rbegin(),v.rend());
        priority_queue<int>pq;
        ll sum=0;
        ll ans=-1;
        for(int i=0;i<n;i++){
          sum=sum+v[i].second;
          pq.push(-v[i].second);
          if(pq.size()>k){
            sum=sum+pq.top();
            pq.pop();
          }
         
            ans=(max(ans,sum*v[i].first));
          
        }
        return ans%mod;

    }
};