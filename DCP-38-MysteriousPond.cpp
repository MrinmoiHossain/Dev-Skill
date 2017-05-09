#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int n;
        cin >> n;
        vector< pair<int, string> >p;
        string s;
        int a;
        for(int j = 0; j < n; j++){
            cin >> s >> a;
            p.pb(make_pair(a, s));
        }
        sort(p.begin(), p.end());

        cout << p[p.size() - 1].second << " " << p[0].second << endl;
    }

    return 0;
}
