#include <bits/stdc++.h>
#define read() freopen("input", "r", stdin)
#define write() freopen("output", "w", stdout)
using namespace std;

string bin(int n);

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0, n; i < T; i++){
		cin >> n;
		
		cout << n << " " << bin(n) << endl;
	}

	return 0;
}

string bin(int n)
{
	if(n == 1)
		return "000";
	else if(n == 2)
		return "010";
	else
		return "110";
}
