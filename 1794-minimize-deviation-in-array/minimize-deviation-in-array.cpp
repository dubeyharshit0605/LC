class Solution {
public:
    int minimumDeviation(vector<int>& arr) {
        int n=arr.size();
        int mini=1e9;
        priority_queue<int>q;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                arr[i]=arr[i]*2;
            }
            mini=min(mini,arr[i]);
            q.push(arr[i]);
        }
        int maxi=-1;
        //priority_queue<int>q;
         int x=q.top()-mini;
         while(q.top()%2==0){
             int y=q.top();
             q.pop();
             y=y/2;
             mini=min(mini,y);
             q.push(y);
             x=min(q.top()-mini,x);
         }
        
         
         return x;
         
        
    }
};