#include <bits/stdc++.h>
#define read() freopen("input", "r", stdin)
#define write() freopen("output", "w", stdout)
typedef long long int ll;
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	ll sum = 0;
	for(int i = 3; i < n; i++)
		if(i % 3 == 0 or i % 5 == 0)
			sum += i;

	cout << sum << endl;

	return 0;
}
