class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(nums[i] == nums[i+1]){
               ans = nums[i];
               break;
            }
        }
        return ans;
    }
};