#include<bits/stdc++.h>
using namespace std;

void Swap(int *a, int *b){

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}

void selection_sort(int a[], int n){

	int min_indx;
    for(int i=0; i<n-1; i++){
        min_indx=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min_indx]){
                min_indx=j;
            }
        }

        if(min_indx!=i){ 
            Swap(&a[min_indx],&a[i]);
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
    
    selection_sort(a,n);
    cout<<"After sorting"<<endl;
    print(a,n);

    return 0;
}
