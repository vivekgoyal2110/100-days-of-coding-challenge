class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int> arr;
        for(int i = 0; i < rows; i++){
            for(int j = i; j < cols; j++){
                arr[i][j] = matrix[i][j];
            }
        }

        for(int i = 0; i < rows; i++){
            for(int j = i; j < cols; j++){
                if(arr[i][j] == 0){
                    //set row 0
                    for(int l = 0; l < cols; l++){
                        matrix[i][l] = 0;
                    }
                    //set column 0
                    for(int k = 0; k < rows; k++){
                        matrix[k][j] = 0;
                    }
                    break;
                }
            }
        }
    }
};