class Solution {
public:
multiset<int>mt;
    void insert(int x){
      mt.insert(x);
    }
    void erase(int x){
        mt.erase(mt.find(x));
    }
    int size(){
        if (mt.empty()) return 0;
        return *mt.rbegin()-*mt.begin();
    }
    int longestSubarray(vector<int>& arr, int limit) {
        int head=-1;
        int tail=0;
        int n=arr.size();
        int ans=0;
        while(tail<n){
            while(head+1<n&&size()<=limit){
                head++;
                insert(arr[head]);
                 if (size() > limit) {
                    erase(arr[head]);
                    head--;
                    break;
                }
            }
            if(size()<=limit){
                ans=max(ans,head-tail+1);
            }
            if(tail>head){
                tail++;
                head=tail-1;
            }else{
                erase(arr[tail]);
                tail++;
            }
        }
        return ans;


    }
};