//
//  main.cpp
//  cpp
//
//  Created by hyoeun on 2024/07/06.
//

#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    string x, y;
    for (int i = 0; i < n; i++) {
        bool impossible = false;
        int arr1[26] = {};
        int arr2[26] = {};

        cin >> x >> y;

        for (int j = 0; j < x.length(); j++) {
            arr1[x[j] - 'a']++;
        }
        for (int j = 0; j < y.length(); j++) {
            arr2[y[j] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (arr1[i] != arr2[i]) {
                impossible = true;
                break;
            }
        }

        cout << (impossible ? "Impossible" : "Possible") << '\n';

        // fill(&arr1[0], &arr1[26], false);
        // fill(&arr2[0], &arr2[26], false);
        // impossible = 0;
    }
}
