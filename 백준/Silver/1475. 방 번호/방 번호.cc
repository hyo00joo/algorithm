//
//  main.cpp
//  cpp
//
//  Created by hyoeun on 2024/07/06.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int t = 0;
    cin >> n;
    int d[10] = {0,};
    int m = n;
    int s;
    int max = 0;
    while(n>0) {
        d[n%10]++;
        n = n/10;
    }
    
    d[6] = d[6] + d[9];
    d[6] = (d[6]+1)/2;
    d[9] = d[6];

    for(int j = 0; j<10; j++) {
        if(max < d[j]) {
            max = d[j];
        }
    }
    cout << max;
    }