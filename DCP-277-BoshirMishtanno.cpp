#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input", "r", stdin)
#define write() freopen("output", "w", stdout)
using namespace std;

ll Res(int a, int b)
{
	if(a == 1)
		return b;
	if(b == 1)
		return a;
	return (a * b) + Res(a - 1, b - 1); 
}

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, a, b; i <= T; i++){
		cin >> a >> b;

		cout << "Case " << i << ": " << Res(a, b) * 15 << endl;
	}

	return 0;
}
