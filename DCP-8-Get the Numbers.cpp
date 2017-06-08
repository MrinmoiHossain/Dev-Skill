#include <bits/stdc++.h>
#define pb push_back
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    int T;
    cin >> T;

    for(int tc = 1, n; tc <= T; tc++){
        cin >> n;

        vector<string> num(n);
        vector<string> suc;
        vector<string> fail;
        vector<string> confuse;

        for(int i = 0; i < n; i++)
            cin >> num[i];

        for(int i = 0; i < n; i++){
            string temp, tempV, tempS;
            int pos;
            cin >> temp;

            for(int j = 0; ; j++){
                if(temp[j] == ','){
                    pos = j;
                    break;
                }
                else
                    tempV += temp[j];
            }

            for(int j = pos + 1; j < temp.length(); j++)
                tempS += temp[j];

            if(tempS == "Success")
                suc.pb(tempV);
            else
                fail.pb(tempV);
        }
        for(int i = 0; i < suc.size(); i++)
            for(int j = 0; j < fail.size(); j++)
                if(suc[i] == fail[j])
                    confuse.pb(suc[i]);

        cout << "Case: " << tc << endl;
        cout << "Success list" << endl;
        for(int i = 0; i < suc.size(); i++){
            string s = suc[i];
            bool bl = 0;

            for(int j = 0; j < confuse.size(); j++){
                if(s == confuse[j]){
                    bl = 1;
                    break;
                }
            }

            if(bl){
                cout << s << " : " << "Confused" << endl;
                continue;
            }

            for(int j = 0; j < num.size(); j++){
                bool same = 1;
                for(int k = 0; k < num[j].length(); k++){
                    if(s[k] != num[j][k] && s[k] != '*'){
                        same = 0;
                        break;
                    }
                }
                if(same){
                    cout << s << " : " << num[j] << endl;
                    break;
                }
            }
        }

        cout << "Failed list" << endl;
        for(int i = 0; i < fail.size(); i++){
            string s = fail[i];
            bool bl = 0;

            for(int j = 0; j < confuse.size(); j++){
                if(s == confuse[j]){
                    bl = 1;
                    break;
                }
            }

            if(bl){
                cout << s << " : " << "Confused" << endl;
                continue;
            }

            for(int j = 0; j < num.size(); j++){
                bool same = 1;
                for(int k = 0; k < num[j].length(); k++){
                    if(s[k] != num[j][k] && s[k] != '*'){
                        same = 0;
                        break;
                    }
                }
                if(same){
                    cout << s << " : " << num[j] << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
