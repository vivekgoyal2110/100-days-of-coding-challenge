class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        string res;
        for(int i = 0; i < n; i++){
            if(s[i] == '*' && !res.empty()){
                res.pop_back();
            }
            else{
                res.push_back(s[i]);
            }
        }
        return res;
    }
};