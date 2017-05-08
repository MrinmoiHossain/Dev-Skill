#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    cin.ignore();

    for(int j = 0; j < T; j++){
        string a;
        getline(cin, a);

        reverse(a.begin(), a.end());

        cout << a << endl;
    }

    return 0;
}
