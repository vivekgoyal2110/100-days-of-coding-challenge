class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> arr;
        //merge array
        for(int i = 0; i < n; i++){
            arr.push_back(nums1[i]);
        }
        for(int i = 0; i < m; i++){
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(), arr.end());
        int size = arr.size();
        //return median
        float ans = 0.0;
        if(size%2==0){
            ans = (arr[size/2] + arr[(size/2)-1])/2.0;
        }
        else{
            ans = arr[size/2];
        }
        return ans;
    }
};