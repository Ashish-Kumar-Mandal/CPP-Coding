#include <iostream>

using namespace std;

template <typename T>
T add(T a, T b){
    return a+b;
}

int main(){
    int a,b;
    float x,y;

    cout<<"Enter two integer:"<<endl;
    cin>>a>>b;
    cout <<a << " + " <<b <<" = " << add<int>(a, b) <<endl;

    cout<<"Enter two real number:"<<endl;
    cin>>x>>y;
    cout <<x << " + " <<y <<" = " << add<float>(x, y) <<endl;

    return 0;
}
