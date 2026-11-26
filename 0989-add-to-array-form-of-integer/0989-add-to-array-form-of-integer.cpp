class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> result;
        int n = num.size();
        int cur = k;
        int i = n;
        while(--i >= 0 || cur > 0){
            if(i >= 0){
                cur += num[i];
            }
            result.push_back(cur % 10);
            cur /= 10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};