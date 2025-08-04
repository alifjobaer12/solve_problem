// https://codeforces.com/contest/732/problem/A


//                   ~ HI I'M alifjobaer12 ~                       //
//              ^.^  TARGET NEXT ICPC REGION  ^.^                 //

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

void AliF_solve()
{
    int k, r;
    cin >> k >> r;
    // int a[k];
    // for(int i=0; i<k; i++) cin>>a[i];
    // for(int i=0; i<k; i++) {
    int j = 1;
    while (j) {
        int ans = (j)*k;
        if (ans % 10 == r || ans % 10 == 0) {
            cout << j << endl;
            break;
        }

        // if(j>k) break;
        j++;
    }
    //}
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
