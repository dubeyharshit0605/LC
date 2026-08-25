class NumMatrix {
public:
using ll=long long;
int pre[250][250];



  void prefixsum(vector<vector<int>>arr){
    int n=arr.size();
    int m=arr[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll s=arr[i][j];
            if(i>0) s=s+pre[i-1][j];
            if(j>0) s+=pre[i][j-1];
            if(i>0&&j>0) s=s-pre[i-1][j-1];
            pre[i][j]=s;
        }
    }
  }
    NumMatrix(vector<vector<int>>& matrix) {
        prefixsum(matrix);

    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        ll ans=pre[row2][col2];
        if(col1>0) ans=ans-pre[row2][col1-1];
        if(row1>0) ans=ans-pre[row1-1][col2];
        if(col1>0&&row1>0) ans=ans+pre[row1-1][col1-1];
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */