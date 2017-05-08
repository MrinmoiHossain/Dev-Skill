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
#define MAX 11000
using namespace std;

bool status[MAX];

void seive();

int main(void)
{
    seive();
    int T;
    cin >> T;

    For(1, T)
    {
        int n;
        cin >> n;

        if(!status[n])
            Cout("Yes");
        else
            Cout("No");
    }

    return 0;
}

void seive()
{
    int limit = sqrt(MAX * 1.0);

    status[0] = 1;
    status[1] = 1;
    for(int i = 4; i <= MAX; i += 2) status[i] = 1;

    for(int i = 3; i <= MAX; i += 2){
        if(!status[i] && i <= limit){
            for(int j = i * i; j <= MAX; j += 2 * i)
                status[j] = 1;
        }
    }
}
