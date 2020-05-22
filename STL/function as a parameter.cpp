#include <iostream>

using namespace std;

bool compare(int a, int b){
    return a > b;
}

void bubble_sort(int a[], int n, bool (&cmp)(int a, int b)){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(cmp(a[j], a[j+1])){
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main(){
    int i,n;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++){
        cin>>a[i];
    }

    bubble_sort(a, n, compare);
    for(i=0; i<n; i++){
        cout<<a[i]<<", ";
    }
}
