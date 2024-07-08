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
    string str1;
    string str2;
    int alphbet1[26] = {};
    int alphbet2[26] = {};
    int sum = 0;

    cin >> str1 >> str2;

    int i = 0;
    while (str1[i] != NULL) {
        alphbet1[str1[i] - 'a']++;
        i++;
    }
    int j = 0;
    while (str2[j] != NULL) {
        alphbet2[str2[j] - 'a']++;
        j++;
    }

    for (int k = 0; k < 26; k++) {

        sum += alphbet1[k] - alphbet2[k] < 0 ? alphbet2[k] - alphbet1[k] : alphbet1[k] - alphbet2[k];
    }
    cout << sum;
}
