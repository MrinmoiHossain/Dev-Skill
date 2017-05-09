#include <bits/stdc++.h>
#define For(a, b) for(int i = a; i <= b; i++)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    For(1, T)
    {
        int n;
        cin >> n;
        int a, out = 0, sum = 0;
        while(out != n){
            cin >> a;

            if(a == 0)
                out++;
            else
                sum += a;
        }
        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}
