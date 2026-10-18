class Solution {
public:

  int reverse(int x){
    int y=0;
    while(x!=0){
       y=y+x%10;
       y=y*10;
       x=x/10;
    }
    return y/10;
  }
    int countDistinctIntegers(vector<int>& arr) {
        set<int>st;
        int n=arr.size();
        vector<int>vis;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
            int x=reverse(arr[i]);
            st.insert(x);
        }
        return st.size();
    }
};