class Solution {
public:
    string finalString(string s) {
        string res;
        int n = s.length();
        int size = -1;
        for(int i = 0; i < n; i++){
            if(s[i] != 'i'){
                res.push_back(s[i]);
                size++;
            }
            else{
                int l = 0;
                int k = size;
                while(l <= k){
                    swap(res[l], res[k]);
                    l++;
                    k--;
                }
            }
        }
        return res;
    }
};