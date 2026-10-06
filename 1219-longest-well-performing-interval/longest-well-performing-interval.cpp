class Solution {
public:
using ll=long long;
    int longestWPI(vector<int>& hours) {
        int n=hours.size();
        vector<ll>pref(n+1);
        ll sum=0;
        ll ans=0;
        for(int i=0;i<n;i++){
          if(hours[i]>8){
            hours[i]=1;
          }else{
            hours[i]=-1;
          }
        }
        for(ll i=1;i<=n;i++){
            sum=sum+hours[i-1];

            int low=0;
            int high=i-1;
            
            while(low<=high){
            ll mid=low+(high-low)/2;
            if(pref[mid]<sum){
                ans=max(ans,i-mid);
                high=mid-1;
            }else{
                low=mid+1;
            }
            }
            pref[i]=min(pref[i-1],sum);

        }
        return ans;


    }
};