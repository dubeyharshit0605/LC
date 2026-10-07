class Solution {
public:
    int waysToSplit(vector<int>& arr) {
        using ll=long long;
        int mod=1e9+7;
        int n=arr.size();
        using l=long long;
        vector<int>pre(n);
        ll ans=0;
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
        }
        for(int i=0;i<n-2;i++){
          ll leftsum=pre[i];
          int low=i+1;
          int high=n-2;

          int first=-1;
          while(low<=high){
            int j=low+(high-low)/2;
            ll midsum=pre[j]-pre[i];
             if(midsum>=leftsum){
                first=j;
                high=j-1;
             }else{
                low=j+1;
             }

          }
          if(first==-1) continue;
             low=first;
             high=n-2;
             int last=-1;
             while(low<=high){
                int j=low+(high-low)/2;
                ll midsum=pre[j]-pre[i];
                ll rightsum=pre[n-1]-pre[j];
                if(midsum<=rightsum){
                    last=j;
                    low=j+1;
                }else{
                    high=j-1;
                }
             }
             if(last!=-1){
                ans=(ans+last-first+1)%mod;
             }
            
          }
         return ans;

    }
};