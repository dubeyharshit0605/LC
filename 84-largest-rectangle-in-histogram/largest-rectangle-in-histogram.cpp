class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        vector<int>pse(n,-1);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&h[st.top()]>=h[i]){
                st.pop();
            }
            if(!st.empty()){
                pse[i]=st.top();
            }
            st.push(i);
        }
         n=h.size();
        vector<int>nse(n,n);
         stack<int>mt;
        for(int i=n-1;i>=0;i--){
            while(!mt.empty()&&h[mt.top()]>=h[i]){
                mt.pop();
            }
            if(!mt.empty()){
                nse[i]=mt.top();
            }
            mt.push(i);
        }
        int maxi=-1;
        for(int i=0;i<n;i++){
            maxi=max(maxi,h[i]*(nse[i]-pse[i]-1));
        }
        return maxi;
      
    }
};