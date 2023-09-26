class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int>(n,0));

        int startingRow=0;
        int endingRow=n-1;
        int startingCol=0;
        int endingCol=n-1;
        int k=1;
        int last=n*n;
    while(k<=last){
        for(int i=startingCol;k<=last,i<=endingCol;i++){
            mat[startingRow][i]=k++;
        }
        startingRow++;
        for(int i=startingRow;k<=last,i<=endingRow;i++){
            mat[i][endingCol]=k++;
        }

        endingCol--;
        for(int i=endingCol;k<=last,i>=startingCol;i--){
            mat[endingRow][i]=k++;
        }
        endingRow--;
        for(int i=endingRow;k<=last, i>=startingRow;i--){
            mat[i][startingCol]=k++;
        }
        startingCol++;
     }
     return mat;
    }
};