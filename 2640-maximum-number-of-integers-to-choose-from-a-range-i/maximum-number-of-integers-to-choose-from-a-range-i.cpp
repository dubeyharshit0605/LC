class Solution {
public:
    int maxCount(vector<int>& arr, int n, int maxsum) {
     set<int>st;
     for(int i=0;i<arr.size();i++){
         int x=arr[i];
         st.insert(x);
     }
     int cnt=0;
     for(int i=1;i<=n;i++){
        if(st.find(i)==st.end()){
           if(maxsum-i>=0){
            maxsum=maxsum-i;
            cnt++;
           }
        }
     }
     return cnt;

        
    }
};