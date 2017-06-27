#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 1; i <= n; i++){
        string a;
        int b;
        cin >> a >> b;
        int con = 0;
        for(int j = 0; j < a.length() && con < b; j++){
            if(a[j] == '9')
                continue;
            else{
                a[j] = '9';
                con++;
            }
        }

        cout << "Case " << i << ": " << a << endl;
    }

    return 0;
}
