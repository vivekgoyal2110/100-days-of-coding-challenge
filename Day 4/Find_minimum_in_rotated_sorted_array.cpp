// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
//         int mini = *min_element(nums.begin(), nums.end());
//         return mini;
//     }
// };
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mini = 0;
        int s = 0;
        int e = n - 1;
        if(n == 1){
            mini = nums[0];
        }
        else if(n == 2){
            while(s <= e){
                if(nums[s] < nums[e]){
                    mini = nums[s];
                }
            }
        }
        else{
            while(s <= e){
                if(nums[s] < nums[e]){
                    mini = nums[s];
                    s++; 
                    e--;
                }
            }
        }
        return mini;
    }
};

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         return nums[0];
//     }
// };
