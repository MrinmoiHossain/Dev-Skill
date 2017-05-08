#include <bits/stdc++.h>
#define Cout(n) cout << n << endl
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string s, q;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        q = s;
        reverse(s.begin(), s.end());

        if(q == s)
            Cout("Yes");
        else
            Cout("No");
    }

    return 0;
}
