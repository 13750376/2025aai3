///week05-3c.cpp Part1:Inpput, Part2:Output
///Part3:stringstream Part 4:reverse
///CPE
#include <iostream>
#include <sstream> /// Part 3
#include <algorithm> /// Part 4
using namespace std;
int main()
{
    string line; ///
    while (getline(cin, line)){
        stringstream ss(line);
        string word;///
        ss >> word;
        reverse(word.begin(), word.end());
        cout << word;
        while (ss >> word){
            reverse(word.begin(), word.end());
            cout << " " << word;
        }
        cout << line << endl;
    }
}
