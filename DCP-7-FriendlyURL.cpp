#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);

        int b;
        vector<char> p;

        if(s.size() > n)
            b = n;
        else
            b = s.size();

        int pos = 0;
        bool bl = 0;
        for(int j = 0; pos < b && s[j]; j++){
            if(s[j] >= 'A' && s[j] <= 'Z')
                p.push_back(tolower(s[j])), pos++, bl = 1;
            else if(s[j] == ' ' && bl)
                p.push_back('-'), pos++, bl = 0;
            else if(s[j] >= 'a' && s[j] <= 'z' || s[j] >= '0' && s[j] <= '9')
                p.push_back(s[j]), pos++, bl = 1;
            else if(bl)
                p.push_back('-'), pos++, bl = 0;
        }

        for(int j = 0; j < p.size(); j++){
            if((j == 0 || j == p.size() - 1) && p[j] == '-');

            else
                cout << p[j];
        }
        cout << endl;
    }

    return 0;
}
