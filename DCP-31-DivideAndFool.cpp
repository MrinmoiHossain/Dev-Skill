#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int x, y, p;
        cin >> x >> y >> p;

        cout << x / y << ".";
        x %= y;
        while(p--){
            x *= 10;
            cout << x / y;
            x %= y;
        }
        cout << endl;
    }

    return 0;
}
