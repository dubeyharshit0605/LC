class Solution {
public:
    bool carPooling(vector<vector<int>>& t, int c) {
        int k=1e4;
        vector<int>freq(k);
        vector<int>diff(k,0);
        for(int i=0;i<t.size();i++){
            int l=t[i][1];
            int r=t[i][2];
            int g=t[i][0];
            diff[l]+=g;
            diff[r]-=g;
        }
        for(int i=1;i<k;i++){
            diff[i]=diff[i]+diff[i-1];
            if(diff[i]>c) return false;
            if(diff[0]>c) return false;
        }
        return true;
    }
};