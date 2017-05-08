#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int a;
        cin >> a;
        int b = sqrt(a);

        cout << "Case " << i << ": ";
        if(b * b == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
