//week08-2.cpp Leetcode學習計畫 Matrix矩陣第四題
// 73. Set Matrix Zeroes 設定一堆0
// 要小心, 不能一邊讀,一邊設成0 要兩階段, 先讀完、在設0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) { 
        // 第一階段, 先讀完, 記下全部的齡對應的i和j
        int M = matrix.size(), N = matrix[0].size(); //左手M, 右手N
        vector<int> markI(M,0), markJ(N,0); //宣告C++的陣列 , 長度分別M N, 裡面都設成0
        for (int i=0; i< matrix.size(); i++){
            for (int j=0; j < matrix[0].size(); j++){ 
                if (matrix[i][j]==0){ //要記下對應的 i, j 
                    markI[i] = 1;// 標記一下 i 的這整條, 等一下都要清為0
                    markJ[j] = 1;// 標記一下 i 的這整條, 等一下都要清為0
                }
            }
        }
        // 第二階段 ,再照著markI 和 markJ 的標記, 把整條都清為0
        for(int i=0; i<M ; i++) {
            for (int j=0; j<N; j++) {
                if (markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            } // 如果有標記, 再把它對應的項數變成0
        }
    }
};