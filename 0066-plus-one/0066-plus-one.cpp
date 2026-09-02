class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int carry = 1;
        int i = 0;
        while(carry == 1){
            if( i < digits.size()){
                if(digits[i] == 9){
                    digits[i] = 0;
                }
                else{
                    digits[i]++;
                    carry = 0;
                }
                i++;
            }
            else{
                digits.push_back(carry);
                carry = 0;
            }
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};