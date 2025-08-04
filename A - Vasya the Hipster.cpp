// https://codeforces.com/contest/581/problem/A


//                   ~ HI I'M alifjobaer12 ~                       //
//              ^.^  TARGET NEXT ICPC REGION  ^.^                 //

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

void AliF_solve()
{
    int a, b;
    cin >> a >> b;
    int ans1 = min(a, b);
    int ans2 = abs(a - b) / 2;

    cout << ans1 << " " << ans2 << endl;
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
