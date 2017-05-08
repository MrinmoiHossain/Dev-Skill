#include <bits/stdc++.h>
#define Cin(n) cin >> n
#define Cin5(a, b, c, d, e) cin >> a >> b >> c >> d >> e
#define Cout(n) cout << n << endl
using namespace std;

int main(void)
{
    int T;
    Cin(T);

    double a, b, c, d, e;
    for(int i = 1; i <= T; i++){
        Cin5(a, b, c, d, e);

        double res = d * d + e * e - 2 * a * d - 2 * b * e + a * a + b * b - c * c;

        cout << "Case " << i << ": ";
        if(res == 0.0)
            Cout("OnCircle");
        else if(res < 0.0)
            Cout("Inside");
        else
            Cout("Outside");
    }

    return 0;
}
