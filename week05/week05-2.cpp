///week05-2.cpp
///stringstream
#include <iostream>///cin, cout , getline 讀寫資料
#include <sstream>///stringstream
#include <string>
using namespace std;
int main()
{
    cout << "請輸入一段英文";
    string s;///字串 s
    getline(cin, s);///
    cout << "讀到了s字串:" << s << endl;

    stringstream ss(s);
    string word;///
    while (ss>>word){
        cout << "有一個字:" << word << endl;
    }
}
