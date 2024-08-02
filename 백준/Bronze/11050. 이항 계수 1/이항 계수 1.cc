#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int nck(int n, int k) {
    if(k ==1) {
        return n;
    }
    if(k == 0) {
        return 1;
    }
    if(k == n) {
        return 1;
    }

    return nck(n-1, k) + nck(n-1, k-1);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, k;

    cin >> n >> k;
    cout << nck(n, k);


}
