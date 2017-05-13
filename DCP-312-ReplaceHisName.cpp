#include <bits/stdc++.h>
#define GCin(s) getline(cin, s)
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int j = 1; j <= T; j++){
        string s;
        string a = "Officer";
        GCin(s);

        for(int i = 0; i < s.length(); i++){
        if(s[i] == 'S' && s[i+1] == 'h' && s[i+2] == 'a' && s[i+3] == 'r' && s[i+4] == 'i' && s[i+5] == 'f' && !(s[i+6] >= 'A' && s[i+6] <= 'Z') && !(s[i+6] >= 'a' && s[i+6] <= 'a') && !(s[i-1] >= 'A' && s[i-1] <= 'Z') && !(s[i-1] >= 'a' && s[i-1] <= 'z')){
                s.replace(s.begin() + i, s.begin() + i + 6, a.begin(), a.end());
            }
        }

        cout << "Case " << j <<  ": " << s << endl;
    }

    return 0;
}
