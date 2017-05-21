#include <bits/stdc++.h>
#define LL long long int
#define pb push_back
#define For(a) for(int i = 0; i < a; i++)
using namespace std;

void sequence();

vector<LL> a;

int main(void)
{
    sequence();
    int T;
    cin >> T;

    For(T)
    {
        int n;
        cin >> n;
        cout << a[n - 1] << endl;
    }

    return 0;
}

void sequence()
{
    LL first = 1, second = 3;
    a.pb(first);
    a.pb(second);
    for(int i = 3; i < 45; i++){
        LL temp = first + second;
        a.pb(temp);
        first = second;
        second = temp;
    }
}
