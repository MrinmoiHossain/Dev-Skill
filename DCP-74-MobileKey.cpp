#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        LL n;
        cin >> n;

        cout << "Case #" << i << ": ";
        if(n % 2 == 0)
            cout << n * 3 << " " << n * 3 - 1 << " " << n * 3 - 2 << endl;
        else
            cout << 3 * n - 2 << " " << 3 * n - 1 << " " << 3 * n << endl;
    }
}
