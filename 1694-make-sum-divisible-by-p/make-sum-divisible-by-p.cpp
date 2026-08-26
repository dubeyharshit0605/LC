class Solution {
public:
using ll=long long;
    int minSubarray(vector<int>& arr, int p) {
        int n=arr.size();
        ll sum=0;
        for(int i=0;i<n;i++) sum=sum+arr[i];
        int target=sum%p;
        int ans=n;
        if(target==0) return 0;
        map<int,int>mpp;
        mpp[0]=-1;
        ll pre=0;
        for(int i=0;i<n;i++){
            pre=pre+arr[i];

            int cr=pre%p;

            int dr=(cr-target+p)%p;
            
            if(mpp.find(dr)!=mpp.end()){
                int ss=i-mpp[dr];
               ans=min(ans,ss);
            }
            mpp[cr]=i;
        }
        if(ans==n) return -1;
        return ans;
        
    }
};