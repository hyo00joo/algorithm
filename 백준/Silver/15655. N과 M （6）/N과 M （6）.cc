 // baekjoon 15655
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;


int n, m;
int arr[8];
int res[8];
//bool used[8];

void func(int k, int l) {
    if(k == m) {
        for(int j = 0; j < m; j++) {
            cout << res[j] << " ";
        }
            cout << "\n";
            return;
    }
    for(int i = l; i < n; i++) {
        if(1) {
            res[k] =  arr[i];
            //used[i] = 1;
            func(k+1, 1+i);
            //used[i] = 0;
        }
    }
}
int main() {
    cin >> n >> m;
    for(int i = 0; i< n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    func(0, 0);


}