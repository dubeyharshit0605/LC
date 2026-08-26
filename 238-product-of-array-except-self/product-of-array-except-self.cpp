class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
     int n=arr.size();
     vector<int>pre(n),suf(n),res(n);
     pre[0]=1;
     for(int i=1;i<n;i++){
        pre[i]=pre[i-1]*arr[i-1];
     }
     suf[n-1]=1;
     for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]*arr[i+1];
     }
     for(int i=0;i<n;i++){
        res[i]=pre[i]*suf[i];
     }
     return res;
    }
};
