#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

void divide(string s);
string add(string a, string b);

int main(void)
{
    string s;

    while(cin >> s){
        divide(s);
    }

    return 0;
}

void divide(string s)
{
    string a, b;
    int i;

    for(i = 0; s[i] != ','; i++)
        a.push_back(s[i]);
    for(int j = i + 1; j < s.length(); j++)
        b.push_back(s[j]);

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    string m = add(a, b);

    int  l = m.length();
    while(m[l - 1] == '0'){
        m.erase(m.end() - 1);
        l--;
    }

    reverse(m.begin(), m.end());
    cout << m << endl;
}

string add(string a, string b)
{
    string s;
    if(a.length() < b.length())
        swap(a,b);

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i = b.length(); i < a.length(); i++)
        b += "0";

    int c = 0;
    for(int i = 0; i < a.length(); i++){
        int add = (a[i] - '0') + (b[i] - '0') + c;
        c = add / 10;
        s += (add % 10) + '0';
    }
    if(c > 0)
        s += (c % 10) + '0';

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(s.begin(), s.end());

    return s;
}
