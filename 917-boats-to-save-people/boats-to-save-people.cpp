class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int head=arr.size()-1;
        int tail=0;
        int ans=0;
        while(tail<=head){
            if(arr[head]+arr[tail]<=limit){
                tail++;
            }
            head--;
            ans++;
        }
        return ans;
    }
};