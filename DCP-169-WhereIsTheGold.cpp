#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int r, c;
        cin >> r >> c;
        bool arr[r][c];
        for(int j = 0; j < r; j++){
            for(int k = 0; k < c; k++){
                char ch;
                cin >> ch;
                if(ch == '$'){
                    arr[j][k] = 1;
                }
                else
                    arr[j][k] = 0;
            }
        }
        bool bl = true;
        cout << "Case " << i << ":" << endl;
        for(int j = 0; j < r; j++)
            for(int k = 0; k < c; k++)
                if(arr[j][k]){
                    cout << j+1 << "," << k+1 << endl;
                    bl = false;
                }
        if(bl)
            cout << "No Gold Found" << endl;

    }

    return 0;
}
