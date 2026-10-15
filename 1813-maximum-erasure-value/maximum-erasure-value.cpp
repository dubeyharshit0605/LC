class Solution {
public:
using ll=long long;
ll sum=0;
unordered_map<int,int>freq;
void insert(int x){
    freq[x]++;
    sum=sum+x;
}
void erase(int x){
    freq[x]--;
    sum=sum-x;
}


    int maximumUniqueSubarray(vector<int>& arr) {
        int n=arr.size();
        int head=-1;
        int tail=0;
        ll maxi=0;
        while(tail<n){
            while(head+1<n&&freq[arr[head+1]]==0){
                head++;
                insert(arr[head]);
            }
            maxi=max(maxi,sum);

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