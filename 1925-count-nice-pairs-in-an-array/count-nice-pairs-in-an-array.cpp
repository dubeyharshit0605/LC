class Solution {
public:

int reverse(int x){
    int d=0;
    while(x){
      d=d*10+x%10;
      x/=10;
    }
    return d;
}

    int countNicePairs(vector<int>& arr) {
        int n=arr.size();
        int mod=1e9+7;
        vector<int>brr;
        for(int i=0;i<n;i++){
            brr.push_back(reverse(arr[i]));
        }
        map<int,int>freq;

      for(int i=0;i<n;i++){
        freq[arr[i]-brr[i]]++;
      }
      long long ans=0;
      for(auto& p:freq){
        int k=p.second;
        ans=(ans+(1ll*k*(k-1))/2)%mod;
      }
        return ans;

    }
};