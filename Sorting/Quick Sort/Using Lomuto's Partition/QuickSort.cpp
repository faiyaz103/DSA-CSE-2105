#include<bits/stdc++.h>
using namespace std;

void Swap(int *a, int *b){

    int t=*a;
    *a=*b;
    *b=t;
}

int Lomutos_Partition(int a[], int low, int high){

    int pivot=a[high];

    int i=low-1;

    for(int j=low; j<high; j++){

        if(a[j]<=pivot){
            i++;
            Swap(&a[i],&a[j]);
        }
    }
    Swap(&a[i+1],&a[high]);

    return (i+1);
}

void quick_sort(int a[], int low, int high){

    if(low<high){

        int pi=Lomutos_Partition(a,low,high); //pivot Index

        quick_sort(a,low,pi-1);
        quick_sort(a,pi+1,high);

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
    cout<<"Enter elements:"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"Before Sorting:"<<endl;
    print(a,n);

    quick_sort(a,0,n-1);
    cout<<"After Sorting:"<<endl;
    print(a,n);

    return 0;
}
