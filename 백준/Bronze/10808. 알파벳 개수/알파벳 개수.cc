#include <iostream>
#include <stack>

using namespace std;



int main() {
    
    string a;
    int arr[26] = {0, };

    cin >> a;

    for(int i = 0; i < a.length(); i++) {
        arr[a[i]-'a']++;
    }

    for(int j = 0; j < 26; j++) {
        cout << arr[j] << ' ';
    }
    
 }
