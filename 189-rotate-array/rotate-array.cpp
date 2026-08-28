class Solution {
public:

   void ro(vector<int>&arr,int l,int r){
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
   }
    void rotate(vector<int>& arr, int k) {
     
        int n=arr.size();
           k=k%n;
        ro(arr,0,n-1);
        ro(arr,0,k-1);
        ro(arr,k,n-1);
    }
};