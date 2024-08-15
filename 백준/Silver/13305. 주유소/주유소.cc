// baekjoon 13305
// You must write a problem number like the one above to run the test cases.
// Modifying the source code file or the src/input.txt file will restart the process.
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include <vector>
#include<limits>

int main()
{
    long long n;
    cin >> n;
    long long len[n-1];
	long long cost[n];
	int length= 0;
	for(int i = 0; i < n-1; i++) {
		cin >> len[i];
		length += len[i];}
	for(int i = 0; i < n; i++) cin >> cost[i];
	long long sum = 0;
	int k = 0;
	int l = 0;
	long long min = 1000000000;
	while(length) {
		if(cost[k] != '0' && cost[k] < min) min = cost[k];
		sum += min*len[l];
		length -= len[l];
		l++;
		k++;
	}
	cout << sum;
}