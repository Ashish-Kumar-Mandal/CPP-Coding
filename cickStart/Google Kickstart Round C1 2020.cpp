#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve(){
    cin>>n>>k;
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    int ans=0;
    for(int i=k-1; i<n; ++i){
        bool ok=1;
        for(int j=1; j<=k&&ok; ++j){
            if(a[i+1-j]!=j){
                ok=0;
            }
        }
        ans+=ok;
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=1; i<=t; ++i){
        cout<<"Case #"<<i<<": ";
        solve();
    }
}
