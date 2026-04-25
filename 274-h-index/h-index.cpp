class Solution {
public:
    int hIndex(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> bucket(n+1,0);
        int total = 0;
        for(int i=0;i<n;i++){
            if(arr[i] > n){
                bucket[n]++;
            }
            else{
                bucket[arr[i]]++;
            }
        }
        for(int i=n;i>=0;i--){
            total += bucket[i];
            if(total >= i){
                return i;
            }
        }
        return 0;
    }
};