//baekjoon 11651

//You must write a problem number like the one above to run the test cases.
//Modifying the source code file or the src/input.txt file will restart the process.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct point {
    int x, y;
};

bool compare(point& a, point& b) {
    if(a.y == b.y) {
        return a.x < b.x;
    }
    else {
        return a.y < b.y;
    }
}

int main(void) {
    cin.tie(0)->tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    vector<point> P(n);
    for(int i = 0; i < n; i++) {
        cin >> P[i].x >>  P[i].y;
        
    }
    
    sort(P.begin(), P.end(), compare);
   
    

    for(int i = 0; i < n; i++) {
        cout << P[i].x << " " << P[i].y << "\n";
    }
}

