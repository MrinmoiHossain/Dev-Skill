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

    double a, b, c;
    For(1, T){
        cin >> a >> b >> c;
        double d = (a * a) + (b * b);

        FCout(sqrt(d + (c * c)), 2);
    }

    return 0;
}
