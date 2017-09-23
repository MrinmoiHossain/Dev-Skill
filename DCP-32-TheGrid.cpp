#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	for(int i = 1, a, b, c, d; i <= T; i++){
		cin >> a >> b >> c >> d;
		
		cout << "Case " << i << ": " << abs(a - c) + abs(b - d) << endl;
	}
	
	return 0;
}
