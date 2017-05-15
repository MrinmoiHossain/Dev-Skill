#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        LL m, n;
        cin >> m >> n;

        cout << "Case " << i << ": ";
        LL dif = n - m;
        if(m != 1)
            dif++;
        if(dif % 2 == 0)
            cout << "Even" << endl;
        else
            cout << "Odd" << endl;
    }

    return 0;
}
