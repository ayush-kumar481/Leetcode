class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int longest = 1;
        unordered_set<int>st;
        for(int i = 0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        for(auto it : st){
            if(st.find(it - 1) == st.end()){
                int cnt = 1;
                int current = it;
                while(st.find(current + 1) != st.end()){
                    cnt++;
                    current+=1;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};