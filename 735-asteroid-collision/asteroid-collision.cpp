class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<a.size();i++){
          bool x=true;
          if(!st.empty()){
            while(!st.empty()&&st.top()>0&&a[i]<0){
                if(abs(st.top())>abs(a[i])){
                    x=false;
                    break;
                }else if(abs(st.top())==abs(a[i])){
                    st.pop();
                    x=false;
                    break;
                }else if(abs(st.top())<abs(a[i])){
                    st.pop();
                }
                }
                if(x==true){
                st.push(a[i]);
          }
          }
          else{
              st.push(a[i]);          }
          
            }
            while(!st.empty()){
             ans.push_back(st.top());
             st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
        
        }
    
};