//
//  main.cpp
//  cpp
//
//  Created by hyoeun on 2024/07/06.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;
    int sum = 0;
    bool board[100][100] = { false };

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        for (int a = x; a < x + 10; a++) {
            for (int b = y; b < y + 10; b++) {
                board[a][b] = true;
            }
        }
    }
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(board[i][j] != 0) {
                sum++;
            }
        }
    }
    cout << sum;
}