//week04-3.cpp
//LeetCode 
// 1 2 3
//       4
// 4 3 2 1 
//       2
// 9 9 9
//     0 有進位,
//   5
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();
        for(int i=N-1; i>=0; i--){
            if(digits[i]==9) {
                digits[i] = 0;
            } else{//
                digits[i]++;//
                return digits;//
            }
        }
        digits.insert( digits.begin(), 1);//
        return digits; //結束
    }
};