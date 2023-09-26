class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int cnt=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<target){
                cnt = i+1;
            }
            if(nums[i]==target){
                cnt = i;
                break;
            }
        }
        return cnt;
    }
};