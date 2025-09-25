//week03-4.cpp
//Leetcode 
class Solution { //使用動態規劃慢慢更新陣列就好了
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]
        int N = triangle.size(); //總共有幾個
        // 從下往上查,
        for(int i=N-2; i>=0; i--){
            for(int j=0;j<=i; j++){
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};