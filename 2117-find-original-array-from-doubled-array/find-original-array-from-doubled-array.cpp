class Solution {
public:
    vector<int> findOriginalArray(vector<int>& arr) {
        int n=arr.size();
      unordered_map<int,int>freq;
      vector<int>brr;
      sort(arr.begin(),arr.end());
     for(int x:arr){
        freq[x]++;
     }

      for(int i=0;i<n;i++){
        int x=arr[i];
        
        if(freq[x]==0) continue;

        freq[x]--;

        if(freq[2*x]==0) return {};

        freq[2*x]--;

        brr.push_back(x);

      }
      return brr;

    }
};