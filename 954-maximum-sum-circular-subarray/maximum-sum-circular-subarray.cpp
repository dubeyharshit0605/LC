class Solution {
public:
using ll=long long;
    int maxSubarraySumCircular(vector<int>& arr) {
        int n=arr.size();
        ll sum=arr[0];
        ll maxsum=arr[0];
        ll minsum=arr[0];
        ll maxi=arr[0];
        ll mini=arr[0];

        for(int i=1;i<n;i++){
            ll x=arr[i];
            maxsum=max(x,maxsum+x);
            minsum=min(x,minsum+x);

            maxi=max(maxi,maxsum);
            mini=min(mini,minsum);

            sum=sum+x;
        }
        if(maxi<0) return maxi;

        return max(maxi,sum-mini);

    }
};