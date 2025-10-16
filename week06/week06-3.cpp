//week06-3.cpp
//Leetcode 學習計畫 Simulation 模擬 第一題 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op : operations) { // C++進階迴圈
           // cout << op << "\n"; // 試試看 , 會印出什麼東西
           if(op[0]=='+'){ // 把末兩數相加, 在塞回去
            int temp = a.back();//先記下最後一項
            a.pop_back();//暫時吐掉他
            int temp2 = a.back();//再記下最後兩項
            a.push_back(temp);//把剛剛最後一項塞會去
            a.push_back(temp+temp2);//兩項相加,在塞回去
           }else if(op[0]=='D') {//複製最後一位, 在Double乘兩倍
            a.push_back(a.back()*2);
           }else if(op[0]=='C') { // 吐掉最後一位
            a.pop_back();
           }else { // 把stoi(op) 整數, 塞回去
            a.push_back (stoi(op));
           }
        }
        //最後,用for迴圈,把陣列a的值,全部加起來
        int ans=0;
        for(int now:a){//C++ 進階迴圈, 也可以用 for(int i=0; i<a.size(); i++) {int now=a[i]
            ans += now;
        }
        return ans; //先隨便return 0 等下再改
    }
};