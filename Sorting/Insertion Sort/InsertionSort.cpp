#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n){

    for(int i=1; i<n; i++){

        int key=a[i];
        int j=i-1;

        while(key<a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
    }
}

void print(int a[], int n){

    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }

    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter number of elements:"<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"Before sorting"<<endl;
    print(a,n);
    
    insertion_sort(a,n);
    cout<<"After sorting"<<endl;
    print(a,n);

    return 0;
}
