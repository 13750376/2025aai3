///week05-3b.cpp Part1:Inpput, Part2:Output
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
        while (ss >> word){
            reverse(word.begin(), word.end());
            cout << "Åª¨ì¤F" << word << endl;
        }
        cout << line << endl;
    }
}
