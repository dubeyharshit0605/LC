class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        using ll=long long;
        int n=h.size();
        priority_queue<int>pq;
        for(int i=1;i<n;i++){
            int diff=h[i]-h[i-1];
            if(diff<=0) continue;
            pq.push(-diff);
            if(pq.size()>l){
                b=b+pq.top();
                pq.pop();
                if(b<0) return i-1;
            }
            }
        
        return n-1;
    }

};