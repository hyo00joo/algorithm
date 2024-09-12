// baekjoon 2630

#include <cmath>
#include <iostream>

using namespace std;

int colorcheck(int n, int row, int col)
{
}

int RC[128][128];
int blue = 0;
int white = 0;
bool color, same;
void func(int n, int row, int col)
{
    if (n == 1) {
        if (RC[row][col] == 1)
            blue++;
        if (RC[row][col] == 0)
            white++;
        return;
    }
    color = RC[row][col];
    same = true;
    for (int i = row; i <n + row; i++) {
        for (int j = col; j < n + col; j++) {
            if(color != RC[i][j]) {
                same = false;
                continue;
            }
            
        }
        
    }
    if (same) {
        if (color == 1)
            blue++;
        if (color == 0)
            white++;
    } else {
        func(n / 2, row, col);
        func(n / 2, row, col+ n/2);
        func(n / 2, row +  n / 2, col);
        func(n / 2, row + n / 2 , col + n / 2);
    }
}

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> RC[i][j];
        }
    }
    func(N, 0, 0);
    cout << white << "\n"
         << blue;
}