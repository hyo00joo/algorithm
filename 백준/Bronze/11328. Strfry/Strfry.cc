//
//  main.cpp
//  cpp
//
//  Created by hyoeun on 2024/07/06.
//

#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    int n;
    int p = 0;
    int arr1[26] = {};
    int arr2[26] = {};
    cin >> n;
    string x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        for (int j = 0; j < x.length(); j++) {
            arr1[x[j] - 'a']++;
        }
        for (int j = 0; j < y.length(); j++) {
            arr2[y[j] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {

            if (arr1[i] != arr2[i])
                p++;
        }
        

        if (p != 0) {
            cout << "Impossible\n";
        } else
            cout << "Possible\n";
        for (int i = 0; i < 26; i++) {
            arr1[i] = 0;
            arr2[i] = 0;
        }
        p = 0;
    }
}
