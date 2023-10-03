class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int start = 0 , end = n-1;
        while(start < end){
        //isalnum() is used to check if the input value is either an alphabet or a number.
            if( !isalnum(s[start])) { //ingnore invailid alphanumeric character from left 
                start ++;
                continue;
            }
            if( !isalnum(s[end])){ 
                end --;// ingnoring invailid alphanumeric character from right end 
                continue;
            }
            if( tolower(s[start]) != tolower(s[end])){
                return false ; // we get different character 
            }
            else{
                start ++;// if get same character irrespective of case of character 
                // then we increase from left and right pointer 
                end--;
            }

        }
        return true ; 
    }
};