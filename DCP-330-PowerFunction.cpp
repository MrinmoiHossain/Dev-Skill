#include <bits/stdc++.h>
#define LL long long int
using namespace std;

void even(int x);
void odd(int x);
void last(LL x);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int x;
        cin >> x;

        if(x % 2 == 0)
            even(x);
        else
            odd(x);
    }

    return 0;
}

void even(int x)
{
    LL a = pow(2, x);
    last(a);
}

void odd(int x)
{
    LL a = (-1) * pow(2, x);
    last(a);
}

void last(LL x)
{
    LL b = abs(x);

    while(b > 9)
        b /= 10;

    if(x > 0)
        cout << "+";
    else if(x < 0)
        cout << "-";
    cout << b << endl;
}
