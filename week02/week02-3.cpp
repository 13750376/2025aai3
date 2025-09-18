///week02-3.cpp 使用C++ 2011 年新版的字串stoi()功能
#include <iostream>///cin cout
#include <string>///string 字串的功能
using namespace std;
int main()
{
	string a;///宣告字串 a
	cin >> a;///讀入字串 a

	string ans;///宣告字串 ans 放答案用的
	int N = a.length();///字串 a 的長度
	for(int i=N-1; i>=0; i--){///倒過來的迴圈
		ans += a[i];
	}

	cout << a << '+' << stoi(ans) << '='
		<<stoi(a) + stoi(ans) << endl;
}