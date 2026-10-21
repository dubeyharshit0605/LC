class Solution {
public:
using ll=long long;
    long long largestPerimeter(vector<int>&arr) {
        int n=arr.size();
        vector<ll>pre(n);
        sort(arr.begin(),arr.end());
        pre[0]=arr[0];

        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
        }
        if(n==3){
            if(pre[1]<=arr[2]) return -1;
        }
        if(n<3) return -1;
        int x=-1;
        for(int i=0;i<n-1;i++){
            if(pre[i]>arr[i+1]){
                x=i;
            }
        }
        if(x==-1) return -1;

        return pre[x+1];
    }
};