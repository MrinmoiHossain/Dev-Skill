#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int n;
        cin >> n;

        if(n < 120)
            cout << "Naughty Boy Sifat" << endl;
        else
            cout << "Good Boy Sifat" << endl;
    }

    return 0;
}
