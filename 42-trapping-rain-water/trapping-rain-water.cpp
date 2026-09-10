class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        int l=0;
        int r=n-1;
        int leftm=h[0];
        int rightm=h[n-1];
        int ans=0;
        while(l<r){
            if(leftm<rightm){
            l++;
            leftm=max(leftm,h[l]);
            ans=ans+(leftm-h[l]);

        }else{
            r--;
            rightm=max(rightm,h[r]);
            ans=ans+(rightm-h[r]);
        }
    }
    return ans;
    }
};