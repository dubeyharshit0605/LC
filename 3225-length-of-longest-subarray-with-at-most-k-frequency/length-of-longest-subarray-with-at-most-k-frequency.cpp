class Solution {
public:
    int maxSubarrayLength(vector<int>& arr, int k) {
        int n=arr.size();
        int head=-1;
        int tail=0;
        map<int,int>freq;
        int mini=-1;
        while(tail<n){
            while(head+1<n&&freq[arr[head+1]]<k){
               head++;
               freq[arr[head]]++;
            }
            mini=max(mini,head-tail+1);
            if(tail>head){
                head=tail-1;
                tail++;
            }else{
                freq[arr[tail]]--;
                tail++;
            }
        }
        return mini;
    }
};