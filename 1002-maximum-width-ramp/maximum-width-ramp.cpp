class Solution {
public:
    int maxWidthRamp(vector<int>& arr) {
        int n=arr.size();
        vector<int>pre(n),suff(n);
        int maxi=-1;
        pre[0]=arr[0];
        suff[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            pre[i]=min(pre[i-1],arr[i]);

        }
        for(int i=n-2;i>=0;i--){
            suff[i]=max(suff[i+1],arr[i]);
        }
        int l=0;
        int r=0;
        while(l<n&&r<n){
            if(pre[l]<=suff[r]){
                maxi=max(maxi,r-l);
                r++;
            }else{
               l++;
            }
        }
        return maxi;
    }
};