#include <bits/stdc++.h>
#define read() freopen("input", "r", stdin)
using namespace std;
typedef long long int ll;
#define MOD 100000

ll mod(string s)
{
	ll sum= 0;
	for(int i = 0; i < s.length(); i++){
		sum = sum * 10 + (s[i] - '0');
		sum %= MOD;
	}

	return sum;
}

int main(void)
{
	read();
	int T;
	cin >> T;
	cin.ignore();

	string s;
	for(int i = 0; i < T; i++){
		cin >> s;

		cout << mod(s) << endl;
	}

	return 0;
}
