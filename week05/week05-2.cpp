///week05-2.cpp
///stringstream
#include <iostream>///cin, cout , getline Ū�g���
#include <sstream>///stringstream
#include <string>
using namespace std;
int main()
{
    cout << "�п�J�@�q�^��";
    string s;///�r�� s
    getline(cin, s);///
    cout << "Ū��Fs�r��:" << s << endl;

    stringstream ss(s);
    string word;///
    while (ss>>word){
        cout << "���@�Ӧr:" << word << endl;
    }
}
