#include <iostream>
#define LL long long int
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        LL ao, bc;
        cin >> ao >> bc;

        cout << "Case " << i << ": " << (4 * ao * ao) - (bc * bc) << endl;
    }

    return 0;
}
