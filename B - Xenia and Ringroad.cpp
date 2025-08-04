//                   ~ HI I'M alifjobaer12 ~                       //
//              ^.^  TARGET NEXT ICPC REGION  ^.^                 //

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;


void AliF_solve() {
    long long n, m; cin>>n>>m;
    long long a[m+1];
    for(int i=1; i<=m; i++) cin>>a[i];
    
    long long ans=0;
    a[0] =1;
    for(int i=0; i<m; i++) {
        if(a[i] > a[i+1]) {
            ans += ((a[i+1]+n) - a[i]);
        }
        else {
            ans += a[i+1] - a[i];
        }
    }
    
    cout<<ans<<endl;
    return ;
}

int main()
{
    int tc=1; //cin>>tc;
    for(int i=1; i<=tc; i++) AliF_solve();
    return 0;
}

//                       ~  Thank You  ~                         //
    