#include <bits/stdc++.h>
#define pb push_back
#define For(a) for(int i = 1; i <= a; i++)
#define Cin4(a, b, c, d) cin >> a >> b >> c >> d
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    int mx = -100000000;

    For(T)
    {
        int b, s, g, r;
        Cin4(b, s, g, r);

        int res = b * 1 + s * 3 + g * 10 - r * 5;


        cout << "Player " << i << ": " << (res < 0 ? 0 : res) << endl;
        mx = max(mx, res);
    }
    cout << "High Score = " << mx << endl;

    return 0;
}
