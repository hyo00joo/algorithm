// baekjoon 1541
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include <string>

int main()
{
    ios::sync_with_stdio(0);
    string input;
    cin >> input;
    int sum = 0;
    string num;
    bool minus = false;
    for (int i = 0; i <= input.size(); i++) {
        if (input[i] == '-' || input[i] == '+' || i == input.size()) {
            if (minus) {
                sum -= stoi(num);
            } else
                sum += stoi(num);
			num = "";
        } else {
            num += input[i];
        }
		if(input[i]=='-') minus = true;
    }
    cout << sum;
}