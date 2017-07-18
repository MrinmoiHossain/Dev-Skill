#include <bits/stdc++.h>
#define read() freopen("input", "r", stdin)
using namespace std;

int res(string s)
{
	int sum = 0;

	for(int i = 0; i < s.length(); i++)
		if(isdigit(s[i]))		
			sum += (s[i] - '0');

	if(sum % 3 == 0)
		return 3;
	else if(sum % 3 == 2)
		return 1;
	else
		return 2;
}

int main(void)
{
	int T;
	cin >> T;
	cin.ignore();

	string s;
	for(int i = 1; i <= T; i++){
		cin >> s;

		cout << "Case " << i << ": " << res(s) << endl;
	}

	return 0;
}
