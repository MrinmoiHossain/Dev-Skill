#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        double a, b;
        cin >> a >> b;

        double c = floor(sqrt(2) * a);
        b = floor(b);

        if(c == b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
