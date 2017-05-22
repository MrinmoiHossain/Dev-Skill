#include <bits/stdc++.h>
#define LL long long int
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int n;
        cin >> n;

        double p, total = 0.0;
        int q;
        for(int j = 0; j < n; j++){
            cin >> p >> q;
            total += (p * q);
        }
        LL g;
        cin >> g;

        cout << "Case " << i << ": " << floor(g - total) << endl;
    }

    return 0;
}
