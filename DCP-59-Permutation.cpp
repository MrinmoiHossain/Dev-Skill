#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input", "r", stdin)
#define write() freopen("output", "w", stdout)
using namespace std;

ll fact(int n)
{
	if(n == 0)
		return 1;
	return n * fact(n - 1);
}

int main(void)
{
	int T;
	cin >> T;
	cin.ignore();

	string s;
	for(int i = 0; i < T; i++){
		cin >> s;

		vector<int> v(26, 0);
		for(int j = 0; j < s.length(); j++)
			v[s[j] - 'a']++;

		int sum = 0;
		ll di = 1;
		for(int j = 0; j < 26; j++){
			if(v[j]){
				di *= fact(v[j]);
				sum += v[j];
			}
		}

		cout << fact(sum) / di << endl;
	}

	return 0;
}
