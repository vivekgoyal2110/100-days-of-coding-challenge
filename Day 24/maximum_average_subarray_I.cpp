class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0, end = 0;
        double sum = 0, maxi = INT_MIN;
        while(end < n){
            sum += nums[end];
            if((end-start+1)<k){
                end++;
            }
            else if((end-start+1)==k){
                maxi = max(maxi, sum/k);
                sum = sum - nums[start];
                start++;
                end++;
            }
        }
        return maxi;
    }
};