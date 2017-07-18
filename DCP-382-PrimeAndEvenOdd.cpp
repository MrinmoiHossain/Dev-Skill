#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(void)
{
	ll n, m;

	while(cin >> n >> m){
		if(n == 1 and m == 1){
			cout << "Even" << endl;
		}
		else if((n == 1 and m > 1) || (n > 1 and m == 1)){
			cout << "Odd" << endl;
		}
		else
			cout << "Even" << endl;
	}

	return 0;
}
