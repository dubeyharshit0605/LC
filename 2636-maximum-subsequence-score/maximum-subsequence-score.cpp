class Solution {
public:
    long long maxScore(vector<int>& arr, vector<int>& brr, int k) {
       priority_queue<int>pq;
       vector<pair<int,int>>v;
        int n=arr.size();
        using ll=long long;
        ll ans=-1;
        for(int i=0;i<n;i++){
             v.push_back({brr[i],arr[i]});
        }
         sort(v.rbegin(),v.rend());
           ll sum=0;
         for(int i=0;i<n;i++){
           sum=sum+v[i].second;
           pq.push(-v[i].second);
           if(pq.size()>k){
            sum=sum+pq.top();
            pq.pop();
           }
           if(pq.size()==k){
            ans=max(ans,sum*v[i].first);
           }
         }
         return ans;
    }
};