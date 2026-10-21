class Solution {
public:
    int findUnsortedSubarray(vector<int>& arr) {
        vector<int>brr=arr;
        int n=arr.size();
        sort(brr.begin(),brr.end());
        int x=0,y=-1;
        for(int i=0;i<n;i++){
            if(arr[i]!=brr[i]){
             x=i;
             break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=brr[i]){
             y=i;
             break;
            }
        }
        return y-x+1;
    }
};