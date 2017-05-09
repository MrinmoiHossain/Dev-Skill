#include <iostream>
#include <cmath>
#define LL long long int
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        LL n;
        cin >> n;
        LL fsum = (n * (n + 1) * (2 * n + 1)) / 6;
        LL Ssum = (n * (n + 1)) / 2.0;
        Ssum *= Ssum;

        cout << Ssum - fsum << endl;
    }

    return 0;
}
