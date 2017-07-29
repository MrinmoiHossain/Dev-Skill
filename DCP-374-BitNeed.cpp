#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int le(ll n)
{
	string s;
	while(n){
		s += (n % 2) + '0';
		n /= 2;
	}
	
	return s.length();
}

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0; i < T; i++){
		ll n;
		cin >> n;

		if(!n)
			cout << 1 << endl;
		else
			cout << le(n) << endl;
	}

	return 0;
}
