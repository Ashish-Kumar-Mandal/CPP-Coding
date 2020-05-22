#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    list<int> l;
    l.push_back(0);

    for(int i=0; i<10; i++){
        l.push_back(i+1);
    }

    list<int>::iterator itr=find(l.begin(), l.end(), 8);
    l.insert(itr, 5);

    itr=find(l.begin(), l.end(), 7);
    l.erase(itr);

    for(list<int>::iterator itr=l.begin(); itr!=l.end(); itr++){
        cout<<*itr<<endl;
    }
}
