class Solution {
public:
using ll=long long;
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        ll maxi=-1;
      
        while(l<r){
            ll x=min(arr[l],arr[r])*(r-l);
            maxi=max(maxi,x);
            if(arr[r]>=arr[l]){
                l++;
            }else{
                r--;
            }
        }
        return maxi;
    }
};
