///week03-1.cpp 學習 C++的陣列 vector<int> a;
///File-Save As
#include <iostream> /// C++
#include <vector> /// C++
using namespace std;

int main()
{
    vector<int> a(2); ///有個陣列, 裡面有兩格

    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';
    cout << endl; ///跳行

    a.push_back(99);///
    a.push_back(77);///

     for(int i=0; i<a.size(); i++) cout << a[i] << ' ';
    cout << endl; ///跳行
}
