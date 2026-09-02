class Solution {
public:

  struct cmp{
    bool operator()(string a, string b){
        if(a.size()==b.size()){
            return a>b;
        }
        return a.size()>b.size();
    }
  };

    string kthLargestNumber(vector<string>& s,int k) {
        int n=s.size();

        priority_queue<string,vector<string>,cmp>pq;
        for(int i=0;i<n;i++){
            pq.push(s[i]);
        }
        int cnt=0;
        while(!pq.empty()){
             cnt++;
            if(cnt==n-k+1){
                return pq.top();
            }
             
            pq.pop();
        }
        return "";
    }
};