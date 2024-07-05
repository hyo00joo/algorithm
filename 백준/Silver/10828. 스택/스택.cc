#include <iostream>
#include <stack>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    stack<int> s;
    int n;
    int x;
    string A;
    cin >> n;
    
    
    while(n--) {
        cin >> A;
        if(A=="push") {
            cin >> x; 
            s.push(x);
        }
        
        if(A=="top") {
            if(s.empty() == 0) {
                int y = s.top();
                cout << y << "\n";
            }
            else
                cout << "-1\n";
            
        }
            
        if(A=="size") {
            int y = s.size();
            cout << y << "\n";
        }
        
        if(A=="empty") {
            int y = s.empty();
            cout << y << "\n";
        }
        
        if(A=="pop") {
            if(s.empty() == 0) {
                int y = s.top();
                s.pop();
                cout << y << "\n";
            }
            else
                cout << "-1\n";
            
        } 
        
    }
    
    
    
 }
