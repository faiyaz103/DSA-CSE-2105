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

//Binary Search
void bin_search(int *p, int n, int target){

    int begin=0,end=n-1,mid;

    while(begin<=end){
        mid=(begin+end)/2;

        if(*(p+mid)==target){
            del(p,n,mid);
            break;
        }
        else if(*(p+mid)<target){
            begin=mid+1;
        }
        else if(*(p+mid)>target){
            end=mid-1;
        }
    }

}

int main(){

    int n,target;
    cin>>n>>target;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    bin_search(a,n,target);

    return 0;
}
