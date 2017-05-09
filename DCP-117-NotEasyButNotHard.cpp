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

        cout << (n * (n + 1)) / 2 << endl;
    }

    return 0;
}
