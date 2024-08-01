#include <iostream>
#include <queue> 
#include <vector>


using namespace std;

int main()
{

    cin.tie(0) ->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    int arr[n];
    int arr2[n+1];
    arr2[0] = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arr2[i+1] = arr[i] + arr2[i];
    }
    
    int a, b;

    for(int j = 0; j < m; j++) {
        int sum = 0;
        cin >> a >> b;
        sum = arr2[b] - arr2[a-1];
        cout << sum << '\n';
    }
}