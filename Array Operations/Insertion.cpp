#include<iostream>
using namespace std;

void insert(int *p, int n, int num, int pos){

    for(int i=n; i>pos; i--){
        *(p+i)=*(p+i-1);
    }

    *(p+pos)=num;

    for(int i=0; i<=n; i++){
        cout<<*(p+i)<<' ';
    }
}

int main(){

    int n,num,pos;
    cin>>n>>num>>pos;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    insert(a,n,num,pos);

    return 0;
}
