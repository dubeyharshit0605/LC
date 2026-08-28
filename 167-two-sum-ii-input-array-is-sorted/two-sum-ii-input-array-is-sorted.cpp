class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int i=0;
        int j=arr.size()-1;
        vector<int>brr;
        while(i<j){
            if(arr[i]+arr[j]==target){
                brr.push_back(i+1);
                brr.push_back(j+1);
                return brr;
            }else if(arr[i]+arr[j]<target){
                i++;
            }else{
                j--;
            }
        }
        return brr;
        
    }
};
