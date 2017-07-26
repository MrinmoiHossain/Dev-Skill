#include <bits/stdc++.h>
typedef long int li;
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0; i < T; i++){
		li n;		
		cin >> n;

		cout << (n % 2 == 0? 1 : 9) << endl;
	}

	return 0;
}
