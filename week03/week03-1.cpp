///week03-1.cpp �ǲ� C++���}�C vector<int> a;
///File-Save As
#include <iostream> /// C++
#include <vector> /// C++
using namespace std;

int main()
{
    vector<int> a(2); ///���Ӱ}�C, �̭������

    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';
    cout << endl; ///����

    a.push_back(99);///
    a.push_back(77);///

     for(int i=0; i<a.size(); i++) cout << a[i] << ' ';
    cout << endl; ///����
}
