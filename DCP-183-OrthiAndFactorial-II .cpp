#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input", "r", stdin)
#define write() freopen("output", "w", stdout)
#define mod 100000007
using namespace std;

ll fact(int n)
{
	if(n == 0)return 1;
	return ((n % mod) * (fact(n  - 1) % mod)) % mod;
}

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		cin >> n;

		cout << "Case " << i << ": " << fact(n) << endl;
	}

	return 0;
}
