class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end()); 
        reverse(nums.begin(), nums.begin()+k); 
        reverse(nums.begin()+k, nums.end()); 
    }
    
};
//My Brute force Approach
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         while(k > 0){
//             reverse(nums.begin(), nums.end()); 
//             for(int i = 1; i <= n-k-i; i++){
//                 swap(nums[i], nums[n-i]);
//             }
//             k--;
//         }
//     }
    
// };
//My Brute force Approach
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         for(int i = 1; i <= k; i++){
//             reverse(nums.begin(), nums.end());
//             for(int l = i; l <= k; l++){
//                 swap(nums[l], nums[n-l]);
//             }
//             i = 1;
//         }
//     }
    
// };
