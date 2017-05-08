#include <bits/stdc++.h>
#define LL long long int
#define pb push_back
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define Cin(n) cin >> n
#define Cin2(a, b) cin >> a >> b
#define Cin3(a, b, c) cin >> a >> b >> c
#define Cin4(a, b, c, d) cin >> a >> b >> c >> d
#define GCin(a) getline(cin, a)
#define Cout(n) cout << n << endl
#define FCout(v, n) cout << fixed << setprecision(n) << v << endl
#define For(a, b) for(int i = a; i <= b; i++)
using namespace std;

int main(void)
{
    int a, b;

    while(Cin2(a, b)){
        int perHour, totalHour = 0, day;
        For(1, b){
            Cin(perHour);
            totalHour += perHour;
        }

        if(a % totalHour == 0)
            day = a / totalHour;
        else
            day = a / totalHour + 1;

        if(day == 1)
            Cout("Project will finish within 1 day.");
        else
            cout << "Project will finish within " << day << " days." << endl;
    }

    return 0;
}
