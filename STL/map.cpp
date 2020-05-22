#include<iostream>
#include<map>
using namespace std;

int main(){
    pair<char, int> p;
    map<char, int> m;

    for(char ch='a'; ch<='z'; ch++){
        p.first = ch;
        p.second = (int)ch;

        m.insert(p);
    }

    map<char, int>::iterator it=m.begin();

    for(it=m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    cout<<"Finding a value"<<endl;
    it=m.find('j');
    cout<<(*it).second<<endl;
    // in other method to access.
    cout<<m['j']<<endl;
}
