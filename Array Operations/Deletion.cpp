#include<iostream>
using namespace std;

void del(int *p, int n, int pos){

    for(int i=pos; i<n-1; i++){
        *(p+i)=*(p+i+1);
    }


    for(int i=0; i<n-1; i++){
        cout<<*(p+i)<<' ';
    }
}

int main(){

    int n,pos;
    cin>>n>>pos;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    del(a,n,pos);

    return 0;
}

