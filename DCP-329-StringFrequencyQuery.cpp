#include <bits/stdc++.h>
#define read() freopen("input", "r", stdin)
using namespace std;

int main(void)
{
	read();
	string s;
	getline(cin, s);

	vector<int> v(26, 0);
	for(int i = 0; i < s.length(); i++)
		if(isalpha(s[i]))		
			v[s[i] - 'a']++;

	int n;
	char b;
	cin >> n;
	for(int i = 0, a, p; i < n; i++){
		cin >> a;
		
		if(a == 1){
			cin >> p >> b;

			char t = s[p];
			s[p] = b;
			v[t - 'a']--;
			v[b - 'a']++;
		}
		if(a == 2){
			cin >> b;

			cout << v[b - 'a'] << endl;
		}
	}

	return 0;
}
