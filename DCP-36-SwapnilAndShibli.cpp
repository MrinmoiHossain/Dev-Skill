#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int sw[3], sb[3];
        bool w = 0, b = 0;
        for(int j = 0; j < 3; j++)
            cin >> sw[j];
        for(int j = 0; j < 3; j++)
            cin >> sb[j];
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(sw[j] > sb[k])
                    w = true;
                else
                    b = true;
            }
        }

        cout << "Case " << i << ": ";
        if(w && b)
            cout << "Both can win" << endl;
        else if(w)
            cout << "Swapnil wins" << endl;
        else
            cout << "Shibli wins" << endl;
    }

    return 0;
}
