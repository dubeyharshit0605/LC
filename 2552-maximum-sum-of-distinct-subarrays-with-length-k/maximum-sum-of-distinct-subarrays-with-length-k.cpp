class Solution {
public:
using ll=long long;
ll sum=0;
unordered_map<int,int>freq;
 void insert(int x){
    sum=sum+x;
    freq[x]++;
 }
 void erase(int x){
   sum=sum-x;
   freq[x]--;
 }

    long long maximumSubarraySum(vector<int>& arr, int k) {
        sum=0;
        freq.clear();
        int head=-1;
        int tail=0;
        int n=arr.size();
        ll maxi=0;
        while(tail<n){
          while(head+1<n&&freq[arr[head+1]]<1&&head-tail+1<k){
             head++;
             insert(arr[head]);
          }
          if(head-tail+1==k){
            maxi=max(maxi,sum);
          }
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