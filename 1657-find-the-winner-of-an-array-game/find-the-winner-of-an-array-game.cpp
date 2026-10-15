class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        deque<int>dq(arr.begin(),arr.end());
        int mx=*max_element(arr.begin(),arr.end());

        int cnt=0;
       while(cnt<k&&dq.front()!=mx){
         if(dq[0]>dq[1]){
            cnt++;
            int z=dq[1];
            dq.erase(dq.begin()+1);
            dq.push_back(z);
         }else{
            int x=dq.front();
            dq.pop_front();
            dq.push_back(x);
             cnt=1;
         }

       }
       return dq.front();

    }
};