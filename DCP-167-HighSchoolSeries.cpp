#include <bits/stdc++.h>
#define LL long long int
#define Cin(n) cin >> n
using namespace std;

int main(void)
{
    int T;
    Cin(T);

    for(int i = 1; i <= T; i++){
        int n;
        Cin(n);

        LL res = (n * (n + 1)) / 2;
        cout << "Case " << i << ": " << res * res << endl;
    }

    return 0;
}
