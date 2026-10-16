class Solution {
public:
    int tupleSameProduct(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>freq;
        using ll=long long;
        ll ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            ll x=arr[i]*arr[j];
            ans=ans+8*freq[x];
            freq[x]++;

            }
        }
        return ans;
    }
};