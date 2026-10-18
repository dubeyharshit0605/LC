class Solution {
public:
using ll=long long;
    int maxIceCream(vector<int>& arr, int coins) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        ll sum=0;
        ll cnt=0;
        for(int i=0;i<n;i++){
          if(sum+arr[i]<=coins){
            cnt++;
            sum=sum+arr[i];
          }
        }
        return cnt;
        
    }
};