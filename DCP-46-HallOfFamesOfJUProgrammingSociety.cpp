#include <bits/stdc++.h>
#define LL long long int
using namespace std;

string add(string a, string b);
string divided(string a, int b);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string a, b;
        cin >> a >> b;

        cout << divided(add(a, b), 2) << endl;
    }

    return 0;
}

string add(string a, string b)
{
    string sum;
    if(a.size() < b.size())
        swap(a, b);

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i = b.size(); i < a.size(); i++)
        b += "0";

    int c = 0, s;
    for(int i = 0; i < a.size(); i++){
        s = (a[i] - '0') + (b[i] - '0') + c;
        c = s / 10;
        sum += s % 10 + '0';
    }
    if(c > 0)
        sum += c % 10 + '0';

    reverse(sum.begin(), sum.end());

    return sum;
}

string divided(string a, int b)
{
    bool flag = false;
    LL sum = 0, t;
    string res;
    for(int i = 0; i < a.size(); i++){
        sum = sum * 10 + (a[i] - '0');
        t = sum / b;
        if(t == 0 && !flag)
            continue;
        else{
            res += (t + '0');
            flag = true;
            sum = (sum % b);
        }
    }
    if(!flag)
        res = "0";

    return res;
}
