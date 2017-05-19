#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> stoint(string s);

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int i = 1; i <= T; i++){
        string s;
        getline(cin, s);

        vector<int> a = stoint(s);
        sort(a.begin(), a.end());

        cout << "Case " << i << ": " << "Among " << a.size() << " numbers " << a[a.size() - 1] << " is maximum and " << a[0] << " is minimum" << endl;;
    }

    return 0;
}

vector<int> stoint(string s)
{

    stringstream a(s);
    vector<int> b;
    int i;

    while(a >> i){
        b.pb(i);
        if(a.peek() == ' ')
            a.ignore();
    }
    return b;
}
