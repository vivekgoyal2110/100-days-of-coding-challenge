class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), j=0, i=0, maxi = 1;
        unordered_map<char, int> m;
        
        if(n == 0) return 0;
        
        while(j<n){
            m[s[j]]++;
            
            int k = j-i+1, n2 = m.size();
            
            if(k != n2){
                //Repetition of character has occured
                m[s[i]]--;
                if(m[s[i]] == 0) m.erase(s[i]);
                i++;
            }
            maxi = max(n2, maxi);
            j++;
        }
        return maxi;
    }
};