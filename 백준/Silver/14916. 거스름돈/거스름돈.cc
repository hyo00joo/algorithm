#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    

    if(n == 3 || n ==1) {
        cout << "-1";
        return 0;
    }

    if((n%5)%2 ==0) {
        count += n / 5;
        n = n % 5;
    }
    else {
        count += n/5 - 1;
        n = n%5 +5;
    }

    count += n/2;

    cout << count;

}
