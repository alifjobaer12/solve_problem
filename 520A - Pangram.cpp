//                   ~ HI I'M alifjobaer12 ~                       //
//              ^.^  TARGET NEXT ICPC REGION  ^.^                 //

#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;


void AliF_solve() {
    int n; cin>>n;
    string s; cin>>s;
    set<char>p;
    for(int i=0; i<s.size(); i++) {
        if (s[i] <='Z' && s[i]>='A') s[i]+=32;
        p.insert(s[i]);
    }
    //for(auto val: p) cout<<val<<" ";
    //cout<<p.size();
    if(p.size()==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return ;
}

int main()
{
    int tc=1; //cin>>tc;
    for(int i=1; i<=tc; i++) AliF_solve();
    return 0;
}

//                       ~  Thank You  ~                         //
    