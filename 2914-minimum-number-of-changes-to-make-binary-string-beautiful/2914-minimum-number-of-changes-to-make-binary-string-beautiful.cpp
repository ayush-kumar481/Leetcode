class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int i = 0;
        int j = 1;
        int ans = 0;
        while(j < n){
            if(s[i] == s[j]){
                i += 2;
                j += 2;
            } else{
                ans ++;
                i += 2;
                j += 2;
            }
        }
        return ans;
    }
};