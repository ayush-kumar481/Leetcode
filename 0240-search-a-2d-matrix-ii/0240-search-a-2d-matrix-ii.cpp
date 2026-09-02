class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       for(int i = 0; i<matrix.size(); i++){
        if(bs(matrix[i], target)){
            return true;
        }
       }
       return false; 
    }

    bool bs(vector<int>&nums, int target){
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            int mid = l + (r - l) / 2;
            if(target < nums[mid]){
                r = mid - 1;
            }
            else if(target == nums[mid]){
                return true;
            }
            else{
                l = mid + 1;
            }
        }
        return false;
    }
};