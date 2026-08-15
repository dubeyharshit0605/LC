class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>mpp(256,0);
        for(int i=0;i<t.size();i++){
            mpp[t[i]]++;
        }
        int count=0;
        int needed=t.size();
        int head=-1;
        int tail=0;
        int mini=1e9;
        int n=s.size();
        int start=-1;
        while(tail<n){
          while(head+1<n&&count<needed){
            head++;
            if(mpp[s[head]]>0) count++;
            mpp[s[head]]--;
          }
          if(count==needed){
            if(head-tail+1<mini){
               mini=head-tail+1;
               start=tail;
            }
          }
          if(tail>head){
            tail++;
            head=tail-1;
          }else{
            mpp[s[tail]]++;
            if(mpp[s[tail]]>0) count--;
            tail++;
          }
        }
        if(start==-1) return "";
        return s.substr(start,mini);


    }
};