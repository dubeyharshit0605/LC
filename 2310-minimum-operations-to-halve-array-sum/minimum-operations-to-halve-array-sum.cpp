class Solution {
public:
using ll=long long;

    int halveArray(vector<int>& arr) {
        double sum=0;
        int n=arr.size();
        priority_queue<double>pq;
        for(int i=0;i<n;i++){
         sum=sum+arr[i];
         pq.push(arr[i]);
        }
        double zsum=0;
        int cnt=0;
        while(zsum<sum/2){
            double x=pq.top();
            pq.pop();
            x=x/2;
            zsum=zsum+x;
            pq.push(x);
            cnt++;
        }
        return cnt;
    }
};