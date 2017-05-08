#include <bits/stdc++.h>
#define LL long long int
#define pb push_back
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define Cin(n) cin >> n
#define Cout(n) cout << n << endl
#define FCout(v, n) cout << fixed << setprecision(n) << v << endl
#define For(a, b) for(int i = a; i <= b; i++)
using namespace std;

int main(void)
{
    int T;
    Cin(T);
    cin.ignore();

    for(int i = 1; i <= T; i++){
        string s;
        map<char, int>m;
        cin >> s;

        for(int j = 0; j < s.size(); j++){
            if(!m.count(s[j]))
                m[s[j]] = 1;
            else
                m[s[j]]++;
        }

        cout << "Case " << i << ":" << endl;
        map<char,int>::iterator j;
        for(j = m.begin(); j != m.end(); j++)
            cout << j->first << " " << j->second << endl;
        m.clear();
    }

    return 0;
}
