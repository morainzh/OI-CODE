#include <cstdio>
#include <string>
#include <cmath>

inline int read() {
	int f = 1, x = 0;
	char c;
	while(c < '0' || c > '9') {
		c = getchar();
		if(c == '-') f = -1;
	}
	while(c >= '0' && c <= '9') {
		x = x * 10 + c -48;
		c = getchar();
	}
	
	return f * x;
}

inline double solve(int n) {
	double ans = 0;
	double qrt = sqrt(5);
	ans = pow((qrt+1)/2, n) - pow((1-qrt)/2, n);
	ans /= qrt;
	return ans;
}

int main() {
	register int i, j;
	register int n;
	
	n = read();
	
	printf("%.2lf", solve(n));
	
	return 0;
}
