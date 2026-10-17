class Solution {
public:
using ll=long long;
    int minPatches(vector<int>& arr, int n) {
        ll mis=1;
        ll cnt=0;
        int i=0;

        while(mis<=n){
            if(i<arr.size()&&arr[i]<=mis){
                mis=mis+arr[i];
                i++;
            }else{
                mis=mis+mis;
                cnt++;
            }
        }
        return cnt;
    }
};