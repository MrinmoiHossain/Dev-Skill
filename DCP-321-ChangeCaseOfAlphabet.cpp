#include <bits/stdc++.h>
using namespace std;

char toLower(char a)
{
    return a | 32;
}
char toUpper(char a)
{
    return a & 95;
}

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 0; i < T; i++){
        string s;
        cin >> s;

        for(int j = 0; j < s.length(); j++){
            if(s[j] >= 'A' && s[j] <= 'Z')
                s[j] = toLower(s[j]);
            else
                s[j] = toUpper(s[j]);
        }
        cout << s << endl;
    }

    return 0;
}
