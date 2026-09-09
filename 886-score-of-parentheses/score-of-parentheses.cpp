class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char>st;
        int cnt=0;
        for(int i=0;i<s.size();i++){
          if(s[i]=='('){
            st.push(cnt);
            cnt=0;
          }else{
            cnt=st.top()+max(1,2*cnt);
            st.pop();
          }
    }
      return cnt;
    }
};