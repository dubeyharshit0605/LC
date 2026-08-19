class Solution {
public:
using ll=long long;
ll sum=0;
map<ll,ll>mpp;
void insert(int x){
    if(mpp[x]==0) sum=sum+x;
    mpp[x]++;
}
void erase(int x){
    mpp[x]--;
    if(mpp[x]==0) sum=sum-x;
}

    int minLength(vector<int>& arr, int k) {
        sum=0;
        mpp.clear();
        int n=arr.size();
        int head=-1;
        int tail=0;
        int ans=1e9;
        while(tail<n){
            while(head+1<n&&(sum<k)){
                head++;
                insert(arr[head]);
            }
            if(sum>=k){
                ans=min(ans,head-tail+1);
            }

            if(tail>head){
                tail++;
                head=tail-1;
            }else{
                erase(arr[tail]);
                tail++;
            }
        }
        if(ans==1e9) return -1;
        return ans;
        
        }
    
};