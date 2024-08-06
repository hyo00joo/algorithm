// baekjoon 1758

// You must write a problem number like the one above to run the test cases.
// Modifying the source code file or the src/input.txt file will restart the process.

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cin.tie(0)->tie(0)->sync_with_stdio(0);

    long long n;
    cin >> n;
    long long sum = 0;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

 

    for (int i = 0; i < n; i++) {

        if( arr[i]-i>0 )
        sum += arr[i]-i;

        //sum += (arr[i]-i > 0 ? arr[i]-i : 0) ;
    }

    cout << sum;
}