#include <bits/stdc++.h>
#define Scan(n) scanf("%d", &n)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int C;
        Scan(C);

        int P;
        Scan(P);
        int a[P];
        for(int j = 0; j < P; j++)
            Scan(a[j]);

        cout << "Case " << i << ": ";
        bool bl = false;
        for(int m = 0; m < P - 2; m++){
            for(int j = m + 1; j < P - 1; j++){
                int temp = a[m] + a[j];
                for(int k = j + 1; k < P; k++){
                    temp += a[k];
                    if(temp == C){
                        bl = true;
                        cout << m + 1 << " " << j + 1 << " " << k + 1 << endl;
                        break;
                    }
                    temp -= a[k];
                }
                if(bl)
                    break;
            }
            if(bl)
                break;
        }
        if(!bl)
            cout << "You are out of your luck!" << endl;
    }

    return 0;
}
