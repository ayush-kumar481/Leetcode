class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int median = 0;
        int sum = 0;
        if(n%2 != 0){
            median = nums[n/2];
        } else {
            median = (nums[(n / 2) - 1] + nums[n / 2]) / 2.0;
        }
        for(int i = 0; i<n; i++){
            sum += abs(nums[i] - median);
        }

        return sum;
    }
};