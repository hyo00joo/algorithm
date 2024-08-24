// baekjoon 10845
#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int head = 0;
int tail = 0;
int que[10001];

void push(int index)
{
    que[tail++] = index;
}
int pop()
{
    return que [head++];
}
int size()
{
    return tail - head;
}
int front()
{
    return que[head];
}
int back()
{
    return que[tail - 1];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a;
    cin >> n;
    string input;
    while (n--) {
        cin >> input;
        if (input == "push") {
            cin >> a ;
            push(a);
        }
        else if (input == "size")
            cout << size()<< "\n";
        else if (input == "pop") {
            if (head == tail)
                cout << -1 << "\n";
            else
                cout << pop() << "\n";
        }
        else if (input == "front") {
            if (head == tail)
                cout << -1 << "\n";
            else
                cout << front() << "\n";
        }
        else if (input == "back") {
            if (head == tail)
                cout << -1 << "\n";
            else
                cout << back()<< "\n";
        }
        else if(input == "empty")
            cout << (head==tail) << "\n";

    }
}
