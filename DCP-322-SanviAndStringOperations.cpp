#include <bits/stdc++.h>
using namespace std;

bool check(string a, string b);

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string a, b;
        cin >> a >> b;

        if(check(a, b))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}

bool check(string a, string b)
{
    if(a.length() != b.length())
        return 0;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i = 0; i < a.length(); i++)
        if(a[i] != b[i])
            return 0;

    return 1;
}
