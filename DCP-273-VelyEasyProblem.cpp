#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        string s;
        cin >> s;
        bool b = true;
        for(int j = 0; j < s.size(); j++)
            if(s[j] == 'r'){
                b = false;
                break;
            }

        if(b)
            cout << "Vely easy" << endl;
        else
            cout << "Not vely easy" << endl;
    }

    return 0;
}
