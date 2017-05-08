#include <bits/stdc++.h>
#define LL long long int
#define pb push_back
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define Cin(n) cin >> n
#define GCin(a) getline(cin, a)
#define Cout(n) cout << n << endl
#define FCout(v, n) cout << fixed << setprecision(n) << v << endl
#define For(a, b) for(int i = a; i <= b; i++)
using namespace std;

bool checkPrime(int n);

int main(void)
{
    int T;
    cin >> T;

    For(1, T)
    {
        int n;
        cin >> n;

        if(checkPrime(n))
            Cout("Yes");
        else
            Cout("No");
    }

    return 0;
}

bool checkPrime(int n)
{
    if(n <= 1) return 0;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return 0;

    return 1;
}
