class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1Count(26,0);
        vector<int> wordCount(26,0);
        int n = s1.size();
        int m = s2.size();

        if(n > m) return false;

        for(int i = 0; i<n; i++){
            s1Count[s1[i] - 'a']++;
            wordCount[s2[i] - 'a']++;
        }

        if(s1Count == wordCount) return true;

        for(int i = n; i<m; i++){
            wordCount[s2[i] - 'a']++;
            wordCount[s2[i-n] - 'a']--;

            if(s1Count == wordCount) return true;
        }

        return false;
    }
};