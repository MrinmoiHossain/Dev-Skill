#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int n;
        cin >> n;

        int msum = 0, osum = 0, a;
        for(int j = 0; j < n; j++){
            cin >> a;
            msum += a;
            int pos = a - j;

            if(pos > 0)
                osum += pos;
        }

        cout << msum - osum << endl;
    }

    return 0;
}
