class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = n/3;
        unordered_map<int, int> map;
        vector<int> ans;
        for(auto num : nums){
            map[num]++;
        }
        for(auto num : map){
            if(num.second > count){
                ans.push_back(num.first);
            }
        }
        return ans;
    }
};