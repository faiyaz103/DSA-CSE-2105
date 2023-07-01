#include<bits/stdc++.h>
using namespace std;

void Swap(int *a, int *b){

    int temp;

    temp=*a;
    *a=*b;
    *b=temp;

}

void minmaxsort(int a[], int n){

    int i,j,min,max,min_indx,max_indx;

    for(i=0,j=n-1; i<j; i++,j--){

        min=a[i];
        max=a[i];
        min_indx=i;
        max_indx=i;

        for(int k=i; k<=j; k++){

            if(a[k]>max){
                max=a[k];
                max_indx=k;
            }
            else if(a[k]<min){
                min=a[k];
                min_indx=k;
            }
        }
       
        Swap(&a[i],&a[min_indx]);
       
        if(a[min_indx]==max){
            Swap(&a[j],&a[min_indx]);
        }
        else{
            Swap(&a[j],&a[max_indx]);
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
    
    minmaxsort(a,n);
    cout<<"After sorting"<<endl;
    print(a,n);

    return 0;
}
