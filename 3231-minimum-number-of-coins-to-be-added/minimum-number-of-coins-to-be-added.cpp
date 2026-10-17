class Solution {
public:
using ll=long long;
    int minimumAddedCoins(vector<int>& arr, int t) {
     ll mis=1;
     ll cnt=0;
     ll i=0;
     sort(arr.begin(),arr.end());
     while(mis<=t){
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