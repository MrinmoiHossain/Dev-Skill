#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll gcd(ll a, ll b)
{
	return (b == 0)? a:gcd(b, a % b);
}

int main(void)
{
	int e;

	while(cin >> e){
		int n;
		cin >> n;

		vector<ll> v(n);
		ll g, a;
		cin >> g;
		v[0] = g;
		for(int i = 1; i < n; i++){
			cin >> a;
			v[i] = a;
			g = gcd(g, a);
		}
		for(int i = 0; i < n; i++)
			e -= v[i] / g;

		cout << "Output: " << e << endl;
	}
	
	return 0;
}
