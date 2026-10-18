class Solution {
public:
using ll=long long;
    int longestSquareStreak(vector<int>& arr) {
        set<ll>st(arr.begin(),arr.end());
        int maxi=-1;
        for(ll i:st){
         ll x=i;
         int cnt=1;

         while(st.find(x*x)!=st.end()){
            x=x*x;
            cnt++;
         }
         maxi=max(maxi,cnt);
        }
        return maxi<2?-1:maxi;
    }
};