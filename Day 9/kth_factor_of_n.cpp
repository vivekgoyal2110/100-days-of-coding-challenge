class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> arr;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(n%i==0){
                arr.push_back(i);
            }
        }
        if(k > arr.size()){
            ans = -1;
        }
        else{
            ans = arr[k-1];
        }
        return ans;
    }
};