#include<bits/stdc++.h>
using namespace std;

void Swap(int *a, int *b){

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}

void bubblesort(int a[], int n){

    for(int i=0; i<n-1; i++){
        int swp=0;
        for(int j=0; j<(n-1)-i; j++){
            if(a[j]>a[j+1]){
                Swap(&a[j],&a[j+1]);
                swp=1;
            }
        }

        if(swp==0){ //swp=0 means no swap happened. That means already sorted and
            break;  //no traversing needed.
        }
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
    
    bubblesort(a,n);
    cout<<"After sorting"<<endl;
    print(a,n);

    return 0;
}
