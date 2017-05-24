#include <bits/stdc++.h>
#define LL long long int
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

string change(LL n, int b);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        LL n;
        int b;
        char ch;
        cin >> n >> ch >> b;

        cout << change(n, b) << endl;
    }

    return 0;
}

string change(LL n, int b)
{
    string s;
    if(n == 0)
        return "0";
    while(n){
        int d = n % b;
        if(d > 9){
            d -= 10;
            s += ('A' + d);
        }
        else
            s += (d + '0');
        n /= b;
    }
    reverse(s.begin(), s.end());

    return s;
}
