class Solution {
public:
int maxi;
using ll=long long;
unordered_map<int,int>freq;
   void insert(int x){
        freq[x]++;
    }
    void remove(int x){
        freq[x]--;
    }
    
    long long countSubarrays(vector<int>& arr, int k) {
        int n = arr.size();
        int head=-1;
        int  tail=0;
        int maxi=-1;
        ll ans=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        while(tail<n){
            while(head+1<n&&(freq[maxi]<k)){
                head++;
                insert(arr[head]);
            }
            if(freq[maxi]>=k){
                ans+=(n-head);
            }
            if(tail>head){
                tail++;
                head=tail-1;
            }else{
                remove(arr[tail]);
                tail++;
            }
        }
        return ans;

    }
};