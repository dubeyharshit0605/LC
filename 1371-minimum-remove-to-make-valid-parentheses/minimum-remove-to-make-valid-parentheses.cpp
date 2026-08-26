class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string k;
        int cnt=0;
        for(int i=0;i<s.size();i++){
           if(s[i]=='('){
            cnt++;
            k.push_back(s[i]);
           }else if(s[i]==')'){
            if(cnt!=0){
            cnt--;
            k.push_back(s[i]);
            }
           }else{
            k.push_back(s[i]);
           }
        }
        string ans;
        for(int i=k.size()-1;i>=0;i--){
           if(k[i]=='('&&cnt>0){
            cnt--;
           }else{
            ans.push_back(k[i]);
           }
        }
      reverse(ans.begin(),ans.end());

       return ans;

        
    }
};
