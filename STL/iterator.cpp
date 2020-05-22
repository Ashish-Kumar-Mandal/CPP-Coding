#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;

    for(int i=0; i<10; i++){
        v.push_back(rand());
    }

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
    }

    cout<<"Set coping..."<<endl;
    set<int> s;
    copy(v.begin(), v.end(), inserter(s, s.begin()));

    for(set<int>::iterator it=s.begin(); it!=s.end(); it++){
        cout<<*it<<endl;
    }

    vector<int>::iterator it;
    cout<<"Find Now"<<endl;
    it = find(v.begin(), v.end(), 26500);
    cout<<*it<<endl;

    sort(v.begin(), v.end());

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
    }
}
