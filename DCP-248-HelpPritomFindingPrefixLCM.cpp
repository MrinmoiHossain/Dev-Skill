#include <bits/stdc++.h>
#define read() freopen("input", "r", stdin)
using namespace std;

int gcd(int a, int b)
{
	if(b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * (b / gcd(a, b));
}

int main(void)
{
	int n;
	cin >> n;

	vector<int> v(n);
	for(int i = 0, a; i < n; i++){
		cin >> a;

		if(!i)
			v[i] = a;
		else
			v[i] = lcm(a, v[i-1]);
	}

	int q;
	cin >> q;

	for(int i = 0, a; i < q; i++){
		cin >> a;
		cout << v[a - 1] << endl;
	}

	return 0;
}
