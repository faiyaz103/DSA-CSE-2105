#include<bits/stdc++.h>
using namespace std;
int Max_size=5;

/*----------Checking if queue is empty--------*/
bool isempty(int *front, int *rear){

    if(*front==-1 && *rear==-1){
        return true;
    }
    else{
        return false;
    }
}
/*---------------------------------------------*/



/*---Front element that is gonna be dequeued---*/
void top(int q[], int *front){
    cout<<q[*front]<<' '<<"dequeued"<<endl;
}
/*--------------------------------------------*/



/*---------------Printing Queue----------------*/
void display(int q[], int *front, int *rear){

    int i=*front;
    if(*front==-1 && *rear==-1){
        cout<<"Elements in the queue are empty"<<endl;
    }
    else{
        cout<<"Elements in the queue are: "<<endl;
        
        while(1){
            cout<<q[i]<<' ';
            i=(i+1)%Max_size;

            if(i==((*rear)+1)%Max_size){
                break;
            }
        }
        
        cout<<endl;
    }   
}
/*---------------------------------------------*/



/*----------------Enqueue---------------------*/
void enqueue(int q[], int *front, int *rear, int value){


    if(isempty(front,rear)){ //Checking if queue is empty
        *front=0;
        *rear=0;

        q[*rear]=value;
        cout<<q[*rear]<<' '<<"Enqueued"<<endl;
    }
    else if((((*rear)+1)%Max_size)==*front){
        cout<<"Queue is full"<<endl;
    }
    else{
        *rear=((*rear)+1)%Max_size;
        q[*rear]=value;
        cout<<q[*rear]<<' '<<"Enqueued"<<endl;
    }

}
/*--------------------------------------------*/



/*----------------Dequeue----------------------*/
void dequeue(int q[], int *front, int *rear){

    if(isempty(front,rear)){ //Checking if queue is empty
        cout<<"Queue is empty"<<endl;
    }
    else if(*front==*rear){
        top(q,front);
        cout<<"Dequeue is complete"<<endl;
        *front=-1;
        *rear=-1;
    }
    else{
        top(q,front);
        *front=((*front)+1)%Max_size;
    }

}
/*--------------------------------------------*/



int main(){

    int q[Max_size];
    int front=-1,rear=-1; //Means queue is empty

    enqueue(q,&front,&rear,4);
    enqueue(q,&front,&rear,7);
    enqueue(q,&front,&rear,10);
    enqueue(q,&front,&rear,12);
    enqueue(q,&front,&rear,17);

    display(q,&front,&rear);

    dequeue(q,&front,&rear);
    dequeue(q,&front,&rear);

    display(q,&front,&rear);

    enqueue(q,&front,&rear,65);
    enqueue(q,&front,&rear,8);

    display(q,&front,&rear);

    return 0;
}
