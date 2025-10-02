//week04-1.cpp
//LeetCode 挑戰題 3100.
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; // 
        while(numBottles >= numExchange) {
            numBottles = numBottles - numExchange + 1;
            ans ++ ;
            numExchange ++;
        }
        return ans;
    }
};