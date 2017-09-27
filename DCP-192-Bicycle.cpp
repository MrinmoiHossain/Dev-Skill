#include <bits/stdc++.h>
typedef unsigned long long int ull;
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		cin >> n;

		map<ull, ull> m;
		ull a, b;

		for(int j = 0; j < n; j++){
			cin >> a >> b;
				
			if(m.find(a) == m.end())
				m[a] = b;
			else
				m[a] >= b ? m[a] = b : m[a];
		}

		map<ull, ull>::iterator it = m.begin();
		cout << "Case " << i << ": " << it->first << " " << it->second << endl;
	}

	return 0;
}
