class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        priority_queue<pair<double,pair<int,int>>>v;
        for(int i=0;i<p.size();i++){
            int x=p[i][0]*p[i][0]+p[i][1]*p[i][1];
            double y=sqrt(x);
            v.push({-y,{p[i][0],p[i][1]}});
        }
        vector<vector<int>>brr;
        for(int i=0;i<k;i++){
          brr.push_back({v.top().second.first,v.top().second.second});
          v.pop();
        }
        return brr;
    }
};