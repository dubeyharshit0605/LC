class Solution {
public:
using ll=long long;
ll dist=0;
ll sum=0;
ll maxi=0;
unordered_map<ll,ll>freq;
void insert(int x){
    if(freq[x]==0) dist++;
    freq[x]++;
    sum=sum+x;

}
void erase(int x){
   freq[x]--;
   if(freq[x]==0) dist--;
   sum=sum-x;

}
    long long maxSum(vector<int>& arr, int m, int k) {
        int head=-1;
        int tail=0;
        int n=arr.size();
        while(tail<n){
            while(head+1<n&&head-tail+1<k){
                head++;
                insert(arr[head]);
            }
            if(dist>=m) maxi=max(maxi,sum);

            if(tail>head){
                tail++;
                head=tail-1;
            }else{
                erase(arr[tail]);
                tail++;
            }
        }
        return maxi;

    }
};