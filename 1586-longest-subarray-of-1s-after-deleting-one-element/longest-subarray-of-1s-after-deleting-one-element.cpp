class Solution {
public:

int cnt=0;
 void insert(int x){
    if(x==0) cnt++;
    
 }
 void erase(int x){
    if(x==0) cnt--;
 }

    int longestSubarray(vector<int>& arr) {
        int head=-1;
        int tail=0;
        int maxi=0;
        int n=arr.size();
        while(tail<n){
            while(head+1<n && cnt+(arr[head+1]==0)<=1){
                 head++;
                 insert(arr[head]);
            }
        
            if(cnt<=1){
                maxi=max(maxi,head-tail);
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