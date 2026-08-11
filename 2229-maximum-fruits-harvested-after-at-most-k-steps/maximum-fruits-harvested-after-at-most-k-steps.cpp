class Solution {
public:
using ll=long long;


    ll check(ll left,ll right,ll s){
        return min(abs(s-left)+right-left,abs(s-right)+right-left);
    }
    int maxTotalFruits(vector<vector<int>>& arr, int s, int k) {
    
     
     ll n=arr.size();
     ll head=-1;
     ll tail=0;
     ll sum=0;
     ll maxi=0;
     while(tail<n){
        while(head+1<n&&check(arr[tail][0],arr[head+1][0],s)<=k){
            head++;
            sum=sum+arr[head][1];
        }
        maxi=max(maxi,sum);
        if(tail>head){
            tail++;
            head=tail-1;
        }else{
            sum=sum-arr[tail][1];
            tail++;
        }
     }
     return maxi;
    }
};