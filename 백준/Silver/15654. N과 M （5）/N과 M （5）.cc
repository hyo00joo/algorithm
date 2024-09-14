// baekjoon 15654
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;


int n, m;
int arr[8];
int res[8];
bool used[10000];
vector<pair<int,int> > v;
void func(int k) {
    if(k == m) {
        for(int j = 0; j < m; j++) {
            cout << res[j] << " ";
        }
            cout << "\n";
            return;
    }
    for(int i = 0; i < n; i++) {
        if(!used[arr[i]]) {
            res[k] =  arr[i];
            used[arr[i]] = 1;
            func(k+1);
            used[arr[i]] = 0;
        }
    }
}
int main() {
    cin >> n >> m;
    for(int i = 0; i< n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    func(0);


}