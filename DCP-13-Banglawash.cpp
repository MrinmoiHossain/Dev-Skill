#include <iostream>
using namespace std;

int main(void)
{
    int T, b1, b2, p1, p2, sb1, sb2, sp1, sp2;

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> b1 >> b2 >> p1 >> p2;
        cin >> sb1 >> sb2 >> sp1 >> sp2;

        if((b1 + b2 > p1 + p2) && (sb1 + sb2 > sp1 + sp2))
            cout << "Banglawash" << endl;
        else
            cout << "Miss" << endl;
    }

    return 0;
}
