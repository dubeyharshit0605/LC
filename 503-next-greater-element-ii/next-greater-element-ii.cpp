class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
     int n=arr.size();
     vector<int>crr(2*n);
     for(int i=0;i<n;i++){
        crr[i]=arr[i];
     }
     for(int i=n;i<2*n;i++){
        crr[i]=arr[i-n];
     }


     stack<int>st;
     vector<int>ans(2*n,-1);
     for(int i=0;i<2*n;i++){
        while(!st.empty()&&crr[i]>crr[st.top()]){
        ans[st.top()]=crr[i];
        st.pop();
     }
     st.push(i);
    }
    vector<int>res;
    for(int i=0;i<n;i++){
        res.push_back(ans[i]);
    }
    return res;
    }

};