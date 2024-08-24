// baekjoon 10866
#include <iostream>

using namespace std;
const int mx = 1000005;
int dat[2 * mx + 1];
int head = mx, tail = mx;

void push_front(int x)
{
    dat[--head] = x;
}
void push_back(int x)
{
    dat[tail++] = x;
}
int pop_front()
{
    return dat[head++];
}
int pop_back()
{
    return dat[--tail];
}
int size()
{
    return tail - head;
}
int front()
{
    return dat[head];
}
int back()
{
    return dat[tail - 1];
}
int main(void)
{
    cin.tie(0)->tie(0)->sync_with_stdio(0);
    int n, x;
    cin >> n;
    string input;
    while (n--) {
        cin >> input;
        if (input == "push_back") {
            cin >> x;
            push_back(x);
        } else if (input == "push_front") {
            cin >> x;
            push_front(x);
        } else if (input == "pop_front") {
            if (tail == head)
                cout << -1;
            else {
                cout << pop_front();
            }
            cout << "\n";
        } else if (input == "pop_back") {
            if (tail == head)
                cout << -1;
            else {
                cout << pop_back();
            }
            cout << "\n";
        } else if (input == "size") {
            cout << size() << "\n";
        } else if (input == "empty") {
            cout << (tail == head) << "\n";
        } else if (input == "front") {
            if (tail == head)
                cout << -1<<"\n";
            else
                cout << front() << "\n";
        } else if (input == "back") {
            if (tail == head)
                cout << -1 << "\n";
            else
                cout << back() << "\n";
        }
    }
}