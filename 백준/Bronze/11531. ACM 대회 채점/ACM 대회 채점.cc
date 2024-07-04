#include <iostream>

using namespace std;

int main() {
    int i = 0;
    int q = 0;
    int m[101];
    string n[101];
    string r[101];
    int right = 0;
    int sum = 0;
    int wrong = 0;

    while(q!=1) {

        cin >> m[i];
        if(m[i]==-1) 
            q=1;
        else {
            cin >> n[i];
            cin >> r[i];
            i++;
        }
        
    }
    
    for(int j = 0; j <100; ++j) {
        if(r[j] == "right") {
            sum += m[j];
            right++;
            for(int i = 0; i < j; i++) {
                if(n[i] == n[j]) {
                    wrong++;
                }
            }
            sum += wrong*20;
            wrong = 0;
            
        }
    }
    cout << right << ' ' << sum;
 }
