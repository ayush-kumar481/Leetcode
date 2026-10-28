class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty()) return true;
        int i = 0;
        int j = 0;
        int count = 0;
        while(j<t.size()){
            if(s[i] == t[j]){
                count++;
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        if(count == s.size()){
            return true;
        }
        return false;
        
    }
};