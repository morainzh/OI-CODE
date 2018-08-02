#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int cntA, cntB; 

inline void checkA() {
	if(fabs(cntA - cntB) < 2 || max(cntA, cntB) < 11) return;
	cout << cntA << ":" << cntB << "\n";
	cntA = cntB = 0;
	return;
} 

inline void checkB() {
	if(fabs(cntA - cntB) < 2 || max(cntA, cntB) < 21) return;
	cout << cntA << ":" << cntB << "\n";
	cntA = cntB = 0;
	return;
}

int main() {
	ios::sync_with_stdio(false); 
	
	register int i, j;
	string s1, s2;
	
	cin >> s1 >> s2;
	s2 = s2.substr(0, s2.size() - 1);
	
	for(i = 0; i <= s1.size(); ++ i) {
		if(s1[i] == 'W') {
			++ cntA;
		} else {
			++ cntB;
		}
		checkA();
	}
	
	for(i = 0; i <= s2.size(); ++ i) {
		if(s2[i] == 'W') {
			++ cntA;
		} else {
			++ cntB;
		}
		checkB();
	}
} 
