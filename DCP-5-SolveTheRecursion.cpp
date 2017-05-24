#include <bits/stdc++.h>
#define LL long long int
#define pb push_back
#define LD long double
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

LL recur(LL n1, LL n2, LL n3);

int main(void)
{
    LL a, b, c;

    while(cin >> a >> b >> c){
        cout << recur(a, b, c) << endl;
    }

    return 0;
}

LL recur(LL n1, LL n2, LL n3)
{
    vector<int>a;
    a.pb(n1);
    a.pb(n2);
    a.pb(n3);
    sort(a.begin(), a.end());

    LL sum = a[0] + (a[1] * 2);
    return sum;
}
