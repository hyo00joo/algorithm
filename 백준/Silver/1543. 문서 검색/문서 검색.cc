#include <iostream>
#include <list>

using namespace std;

int main(void)
{
    string str1;
    string str2;

    getline(cin, str1);
    getline(cin, str2);
    int count = 0;

    for (int i = 0; i < str1.length();) {
        int p = 0;
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i + j] == str2[j]) {
                p++;
            }
        }
        if (p == str2.length()) {
            i += str2.length();
            count++;
        }
        else {
            i++;
        }
    }

    cout << count << endl;
}
