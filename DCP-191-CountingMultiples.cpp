#include <bits/stdc++.h>
using namespace std;

long long int num(int n)
{
	return pow(10, n) - 1;
}

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0, n; i < T; i++){
		long long int k, digit, start;
		cin >> n >> k;

		digit = num(n);
		start = num(n - 1);

		cout << digit / k - start / k << endl;
	}

	return 0;
}
