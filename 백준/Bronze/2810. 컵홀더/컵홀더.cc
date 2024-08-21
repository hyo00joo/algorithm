// baekjoon 2810
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    string seat;
    int num = 1;
    cin >> seat;
    for (int i = 0; i < seat.length(); i++) {
        if (seat[i] == 'L')  
            i++;
        num++;
    }
    cout << min(num, n);
}
