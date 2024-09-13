#include <iostream>
using namespace std;

int RC[64][64];

void func(int n, int row, int col) {
    int color = RC[row][col];
    bool same = true;

    for (int i = row; i < row + n; i++) {
        for (int j = col; j < col + n; j++) {
            if (RC[i][j] != color) {
                same = false;
                break;
            }
        }
        if (!same) break;
    }

    if (same) {
        cout << color;
    } else {
        cout << "(";
        func(n / 2, row, col);
        func(n / 2, row, col + n / 2);
        func(n / 2, row + n / 2, col);
        func(n / 2, row + n / 2, col + n / 2);
        cout << ")";
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            char input;
            cin >> input;
            RC[i][j] = input - '0';
        }
    }

    func(N, 0, 0);
    cout << endl;
}
