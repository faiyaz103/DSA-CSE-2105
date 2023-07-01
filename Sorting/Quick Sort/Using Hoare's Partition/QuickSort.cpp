#include<bits/stdc++.h>
using namespace std;

void Swap(int *a, int *b){

    int t=*a;
    *a=*b;
    *b=t;
}

int Hoares_Partition(int a[], int low, int high){

    int pivot=a[low];

    int i=low-1, j=high+1;

    while(1){

        do{
            i++;
        }while(a[i]<pivot);

        do{
            j--;
        }while(a[j]>pivot);

        if(i>=j){
            return j;
        }

        Swap(&a[i],&a[j]);
    }
}

void quick_sort(int a[], int low, int high){

    if(low<high){

        int pi=Hoares_Partition(a,low,high); //pivot Index

        quick_sort(a,low,pi);
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
