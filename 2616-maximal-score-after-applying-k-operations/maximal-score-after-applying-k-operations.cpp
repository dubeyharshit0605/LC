class Solution {
public:
    long long maxKelements(vector<int>& arr, int k) {
        priority_queue<int>q;
        int n=arr.size();
        for(int i=0;i<n;i++){
            q.push(arr[i]);
        }
        long long sum=0;
        for(int i=0;i<k;i++){
            sum=sum+q.top();
            int x=q.top();
            q.push((x+2)/3);
            q.pop();
        }
        return sum;
    }
};