#include <iostream>
#include <queue> 
#include <vector>


using namespace std;

int main()
{
    queue<int> q;

    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++ ) {
        q.push(i);
    }
    vector<int> ans;
    int cur = 0;
    while(!q.empty()) {
        int num = q.front();
        q.pop();

        cur++;
        if(cur != k) {
            q.push(num);
        } else {
            cur = 0;
            ans.push_back(num);

        
        }

    }

    cout << "<";
    for(int i = 0; i< ans.size(); i++) {
        cout << ans[i];
        if( i != ans.size() - 1) 
            cout << ", ";

    }
    cout << ">";
}