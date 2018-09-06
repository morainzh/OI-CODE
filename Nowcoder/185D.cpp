#include <iostream>
#include <cmath>

int main() {
    register int i, j;
    register int n;

    std::cin >> n;
    int count = 0, numB = n, numA = 0;
	count = floor( sqrt(numB) ) - ceil( sqrt(numA) );
	std::cout << count;
}
