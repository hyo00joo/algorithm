// baekjoon 1158
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    queue<int> q;
    queue<int> answer;
    int crt = 1;
    for (int i = 1; i <= n; i++)
        q.push(i);
    while (!q.empty()) {
        int num = q.front();
        if (k == crt){
            answer.push(num);
			crt = 1;}
        else {
            q.push(num);
        	crt++;}
        q.pop();
    }
	cout << "<";
    for (int i = 0; i < n; i++) {
        cout << answer.front();
        answer.pop();
		if(!answer.empty()) cout << ", ";
    }
	cout << ">";
}