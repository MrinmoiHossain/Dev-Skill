#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string a, b, c;
        int d;
        cin >> a >> b >> c >> d;

        if(b == "nobo")
            cout << "Shuva naya barsha " << d + 650 << endl;
        else
            cout << "Shuvo nobo borsho " << d - 650 << endl;
    }

    return 0;
}
