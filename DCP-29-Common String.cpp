#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        string a, b;
        cin >> a >> b;

        int mx = 0;
        for(int j = 0; j < a.length(); j++){
            for(int k = 0; k < b.length(); k++){
                if(a[j] == b[k]){
                    int con = 1, nj = j + 1, nk = k + 1;
                    while(nj < a.length() && nk < b.length()){
                        if(a[nj] == b[nk])
                            con++;
                        else
                            break;
                        nj++, nk++;
                    }
                    mx = max(mx, con);
                }
            }
        }

        cout << "Case " << i << ": " << mx << endl;
    }

    return 0;
}
