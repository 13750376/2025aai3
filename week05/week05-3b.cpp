// week05-5b.cpp
// SOIT07_ADVANCE_002
#include <iostream>
using namespace std;
int main()
{
	int now, M=-9999, m= 9999;
	for(int i=0; i<6; i++){
		cin >> now;
		if(now>M) M=now;
		if(now<m) m=now;
	}
	cout << M-m;
}