#include <iostream>
#include <vector>

const int Maxn = 10003;

std::vector<int> S[Maxn], T[Maxn];

int main() {
	register int x, y;
	int l, r;
	int T, size_s, size_t;
	int ans = 0;
	int flag = false;
	
	std::cin >> T;
	while (T--) {
		std::cin >> l >> r;
		std::cin >> size_s;
		for (i = 1; i <= size_s; ++ i) {
			std::cin >> x;
			S.push_back(x);
		}
		std::cin >> size_t;
		for (i = 1; i <= size_t; ++ i) {
			std::cin >> x;
			T.push_back(x);
		}
		
		for (i = l; i <= r; ++ i) {
			x = l;
			while(x != 0) {
				// get x, y
				y = x % 10;
				x /= 10;
				
				// check enum S (must include)
				flag = true;// flag for enum S
				//aflag = true;// flag for both
				for (auto i : S) {
					if (y != i) flag = false;
				} 
				if (flag == false) {
					//aflag = false;// BOTH ARE AND!!!
					break;// jump out of
				}
				
				// check enum T (mustn't include)
				flag = true;
				for (auto i : T) {
					if (y == i) flag = false;
					break;
				}
				if (flag = false) {
					break;
				}
			}
		}
	} 
}
