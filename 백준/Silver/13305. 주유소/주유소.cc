// baekjoon 13305
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
int main()
{
    int n;
    cin >> n;
    int len[n-1];
	int cost[n];
	int length= 0;
	for(int i = 0; i < n-1; i++) {
		cin >> len[i];
		length += len[i];}
	for(int i = 0; i < n; i++) cin >> cost[i];
	int sum = 0;
	int k = 0;
	int l = 0;
	int min = 10000;
	while(length) {
		if(cost[k] != '0' && cost[k] < min) min = cost[k];
		sum += min*len[l];
		length -= len[l];
		l++;
		k++;
	}
	cout << sum;
	
}