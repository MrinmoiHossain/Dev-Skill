#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

struct sm{
    string s;
    double d;
}data[50];

bool cmp(sm A, sm B)            //structure compare for sorting according to descending order
{
    if(A.d > B.d) return 1;     //decimal value using descending order
    if(A.d < B.d) return 0;

    if(A.s < B.s) return 1;     //string value using ascending order
    if(A.s > B.s) return 0;
}

int main(void)
{
    int T;
    cin >> T;
    data[T];

    for(int i = 0; i < T; i++)
        cin >> data[i].s >> data[i].d;

    sort(data, data + T, cmp);

    int j = 1;
    for(int i = 0; i < T; i++){
        if(i == 0)
            cout << j << "." << data[i].s << endl;
        else{
            if(data[i].d == data[i - 1].d)
                cout << j << "." << data[i].s << endl;
            else
                cout << ++j << "." << data[i].s << endl;
        }
    }


    return 0;
}
