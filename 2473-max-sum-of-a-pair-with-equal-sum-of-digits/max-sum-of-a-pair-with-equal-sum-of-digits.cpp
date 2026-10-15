class Solution {
public:
    int solve(int x){
        int sum=0;
        while(x!=0){
            sum=sum+x%10;
            x=x/10;
    }
    return sum;
    }
    int maximumSum(vector<int>& arr) {
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++){
            v.push_back({solve(arr[i]),arr[i]});
        }
        sort(v.begin(),v.end());
         int maxi=-1;
        for(int i=0;i<arr.size()-1;i++){
            if(v[i].first==v[i+1].first){
             maxi=max(maxi,v[i].second+v[i+1].second);
            }
        }
        return maxi;
    }
};