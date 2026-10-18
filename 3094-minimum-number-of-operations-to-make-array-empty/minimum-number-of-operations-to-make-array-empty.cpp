class Solution {
public:
    int minOperations(vector<int>& arr) {
        int n=arr.size();

        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        int cnt=0;
        for(auto i:mpp){
            int f=i.second;
            if(f==1) return -1;
            cnt=cnt+(f+2)/3;
        }
        return cnt;
    }
};