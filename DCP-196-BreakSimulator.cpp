#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        double u, t;
        cin >> u >> t;

        cout << fixed << setprecision(2) << (0.0 - u) / (t) << endl;
    }

    return 0;
}
