class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int s = 0; 
        int e = (rows*cols) - 1;
        while(s <= e){
            int mid = s + (e-s)/2;
            int i = mid/cols, j = mid%cols;
            if(matrix[i][j] == target){
                return true;
            }
            else if(matrix[i][j] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return false;
    }
};