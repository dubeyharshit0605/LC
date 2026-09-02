class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>freq;
        vector<int>a;
        int n=arr.size();
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }

        for(auto v:freq){
             a.push_back(v.second);
            }
            sort(a.begin(),a.end());
             
             int ans=freq.size();

             for(auto v:a){
                if(k>=v){
                    k=k-v;
                    ans--;
                }else{
                    break;
                }
             }

             return ans;

           
        }
    
};