#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x;
    float y;

    cin>>x;
    cin>>y;
    if((x>0 && x<=2000)&&(y>0 && y<=2000)){
        if(x%5==0 && ((x+0.5)<=y)){
            y = y-x-0.5;
            cout<<y<<endl;
        }else{
            cout<<y<<endl;
        }
    }
}
