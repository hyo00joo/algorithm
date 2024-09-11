// baekjoon 1074
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int func(long long n, long long r, long long c)
{
    if (n == 0)
        return 0;
    else if (r <= pow(2, (n - 1))-1 && c <=pow(2, (n - 1))-1)
        return func(n - 1, r, c);
    else if (r <= pow(2, (n - 1))-1 && c > pow(2, (n - 1))-1)
        return  pow(4, (n-1)) + func(n - 1, r, c - pow(2, (n - 1)));
    else if (r > pow(2, (n - 1))-1 && c <= pow(2, (n - 1))-1)
        return 2 * pow(4, (n-1)) + func(n - 1, r - pow(2, (n - 1)), c);
    else if (r > pow(2, (n - 1))-1 && c > pow(2, (n - 1))-1)
        return 3 * pow(4, (n-1)) + func(n - 1, r -pow(2, (n - 1)), c - pow(2, (n - 1)));
}

int main()
{
    long long N, R, C;
    cin >> N >> R >> C;
    cout << func(N, R, C);
}

