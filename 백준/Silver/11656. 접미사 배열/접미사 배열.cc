// baekjoon 11656

//You must write a problem number like the one above to run the test cases.
//Modifying the source code file or the src/input.txt file will restart the process.

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


int main(void) {
    cin.tie(0)->tie(0)->sync_with_stdio(0);

    string str;
    cin >> str;
    string original_str = str;
    vector<string>strings(str.length());

    
    for(int i = 0; i < str.length(); i++) {
        strings[i] = str.substr(i);
        str = original_str;
    }

    sort(strings.begin(), strings.end());

    for(string a : strings) {
        cout << a << "\n";
    }

}