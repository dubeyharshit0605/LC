class Solution {
public:
using ll=long long;
    bool asteroidsDestroyed(ll m, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(m>=arr[i]){
                m=m+arr[i];
            }else{
                return false;
            }
        }
        return true;
    }
};