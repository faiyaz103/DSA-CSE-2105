#include<bits/stdc++.h>
using namespace std;

void insertion(int a[], int *n, int begin, int element){

    for(int i=*n-1; i>=begin; i--){
        a[i+1]=a[i];
    }

    a[begin]=element;
    (*n)++;
}

void bin_search(int a[], int *n, int element){

    int begin=0,end=*n-1,mid;

    while(begin<=end){

        mid=(begin+end)/2;

        if(a[mid]==element){
            cout<<"Element is already on the list"<<endl;
            break;
        }
        else if(a[mid]<element){
            begin=mid+1;
        }
        else{
            end=mid-1;
        }
    }

    insertion(a,n,begin,element);
}

void print(int a[], int n){

    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}

int main(){

    int a[]={2,4,5,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int element=6;

    cout<<"Before Insertion:"<<endl;
    print(a,n);

    bin_search(a,&n,element);
    cout<<"After Insertion:"<<endl;
    print(a,n);

    return 0;
}
