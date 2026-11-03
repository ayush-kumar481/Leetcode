class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += abs(nums[i] - maxi);
        }

        return sum;
    }
};