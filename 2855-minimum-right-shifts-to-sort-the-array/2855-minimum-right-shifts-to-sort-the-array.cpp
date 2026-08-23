class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int minIdx = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIdx]) {
                minIdx = i;
            }
        }
        bool isValid = true;
        for (int i = 0; i < n - 1; i++) {
            int curr = (minIdx + i) % n;
            int next = (minIdx + i + 1) % n;
            if (nums[curr] > nums[next]) {
                isValid = false;
                break;
            }
        }

        if (!isValid) {
            return -1;
        } else {
            return (n - minIdx) % n;
        }
    }
};