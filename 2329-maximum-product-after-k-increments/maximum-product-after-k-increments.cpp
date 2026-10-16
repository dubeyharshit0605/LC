class Solution {
public:
    int maximumProduct(vector<int>& arr, int k) {
        int n=arr.size();
        int mod=1e9+7;
        using ll=long long;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
          pq.push(arr[i]);
        }
        while(k!=0){
            int x=pq.top();
            pq.pop();
            x=x+1;
            k--;
            pq.push(x);

        }
        ll prod=1;
        while(!pq.empty()){
          prod=1ll*prod*(pq.top())%mod;
          pq.pop();
        }
        return prod%mod;
    }
};