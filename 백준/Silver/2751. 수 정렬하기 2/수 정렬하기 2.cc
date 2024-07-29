#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];
    

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp;

    // for(int i = 0; i < n-1; i++) {
    //     for(int j = 0; j < n - i; j++){
    //         if(arr[j] > arr[j+1]) {
    //             temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[+1] = temp;
    //         }
    //     }
    // }
    sort(arr, arr+n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }

}