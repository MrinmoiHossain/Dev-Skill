#include <bits/stdc++.h>
using namespace std;

string company(char a);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string s;
        cin >> s;

        if(s[0] == '8'){
            cout << s << " " << company(s[4]) << endl;
        }
        else{
            cout << "88" << s << " " << company(s[2]) << endl;
        }
    }

    return 0;
}

string company(char a)
{
    if(a == '1')
        return "Citycell";
    else if(a == '5')
        return "Teletalk";
    else if(a == '6')
        return "Airtel";
    else if(a == '7')
        return "Grameenphone";
    else if(a == '8')
        return "Robi";
    else if(a == '9')
        return "Banglalink";
}
