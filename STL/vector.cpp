#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(10);

    cout<<v.empty()<<endl;

    for(int i=0; i<10; i++){
        v[i] = i+1;
    }

    v.push_back(102);
    v.resize(20);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<", ";
    }
}
