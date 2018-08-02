#include<iostream>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;

    long long max=0, nmax=1, before, now;
    cin >> before;
    for (int i = 2; i <= n; i++) {
        cin >> now;
        if (now - before <= 0) {
            if (nmax >= max)
                max = nmax;
            nmax = 1;
        }
        else
            ++nmax;
        before = now;
    }
    cout << max << endl;
    return 0;
}
