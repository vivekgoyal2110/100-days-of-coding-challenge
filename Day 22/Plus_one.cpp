class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
 //you have to traverse array until the element is not equal to 9
//from last index and add one if element is not equal to 9
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]!=9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
//if whole array is nine the push_back one element and index[0]==1
        digits.push_back(0);
        digits[0]=1;
        return digits;
    }
};