#include "bits/stdc++.h"

using namespace std;

int main() {
	string s;
	cin >> s;
	cin >> s;
	int last = 0, tot = 0; 
	cout << "\n";
	for(register int i=1; i<=s.size(); ++i) {
		if(s[i]=='R'&&s[last]=='U' || \
		   s[i]=='U'&&s[last]=='R') {
			++i;
			++tot;
		} else {
			++tot;
			cout << s[i];
		}
	}
	cout << tot << "\n";

	return 0;
}

