class Solution {
public:
using ll=long long;
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        ll sum=0;
        ll odd=0;
        ll even=0;
        ll res=0;
        const int MOD=1e9+7;
        for(auto i:arr){
          sum=sum+i;
          if(sum%2!=0){
            res=(res+1+even)%MOD;
            odd++;
          }else{
              res=(res+odd)%MOD;
              even++;
          }
        }
        return res;


    }
};