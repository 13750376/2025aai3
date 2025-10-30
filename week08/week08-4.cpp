/// week08-4.cpp
///计堵瑌 ガ计 6174 ( - , 狡7Ω)
#include <iostream>
#include <vector> /// 罽皚
#include <algorithm>
using namespace std;

int main()
{
    cout << "叫块ヴ種4计(常ぃ):";
    int n;
    cin >> n;
    for(int i=0; i<7; i++) {
        vector<int> a;
        while (n>0){
            a.push_back(n%10);
            n = n /10;
        }
        sort(a.begin(), a.end());
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
        /// 单, M琌或?m琌或? 临⊿祇
        n = M-m;
        cout << M << "搭奔" << "眔:" << n << endl;
    }
}
