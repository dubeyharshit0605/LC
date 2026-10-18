class Solution {
public:
using ll=long long;
    long long countFairPairs(vector<int>& v, int loo, int upp) {
        ll ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            auto up=upper_bound(v.begin()+i+1,v.end(),upp-v[i]);
            auto lo=lower_bound(v.begin()+i+1,v.end(),loo-v[i]);
            ans=ans+(up-lo);
        }
        return ans;
    }
};