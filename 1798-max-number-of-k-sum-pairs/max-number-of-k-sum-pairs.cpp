class Solution {
public:
    int maxOperations(vector<int>& arr, int k) {
        multiset<int>mt;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mt.insert(arr[i]);
        }
        int cnt=0;
        while(!mt.empty()){
            auto it=mt.begin();
            int x=*it;
            mt.erase(mt.find(x));
            if(mt.find(k-x)!=mt.end()){
                cnt++;
              mt.erase(mt.find(k-x));
            }

        }
        return cnt;


    }
};