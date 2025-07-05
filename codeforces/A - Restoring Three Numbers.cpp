// https://codeforces.com/contest/732/problem/A


//                   ~ HI I'M alifjobaer12 ~                       //
//              ^.^  TARGET NEXT ICPC REGION  ^.^                 //

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

void AliF_solve()
{
    int ar[4];
    for (int i = 0; i < 4; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + 4);
    int a = ar[3] - ar[0];
    int b = ar[3] - ar[1];
    int c = ar[3] - ar[2];

    cout << a << " " << b << " " << c << endl;
    return;
}

int main()
{
    int tc = 1; // cin>>tc;
    for (int i = 1; i <= tc; i++)
        AliF_solve();
    return 0;
}

//                       ~  Thank You  ~                         //
