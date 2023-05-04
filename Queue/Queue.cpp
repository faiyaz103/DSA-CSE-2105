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



/*----------Checking if queue is full--------*/
bool isfull(int *rear){

    if(*rear>=Max_size-1){
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

    if(*front!=-1 && *rear!=-1){
        cout<<"Elements in the queue are:"<<endl;
    }
    for(int i=*front; i<=(*rear) && *front!=-1 && *rear!=-1; i++){
        cout<<q[i]<<' ';
    } 

    cout<<endl;
}
/*---------------------------------------------*/



/*----------------Enqueue----------------------*/
void enqueue(int q[], int *front, int *rear, int value){

    if(isfull(rear)){ //Checking if queue is full
        cout<<"Queue is full"<<endl;
    }
    else if(isempty(front,rear)){ //Checking if queue is empty
        *front=0;
        *rear=0;

        q[*rear]=value;
        cout<<q[*rear]<<' '<<"Enqueued"<<endl;
    }
    else {
        (*rear)++;
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
        (*front)++;
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

    return 0;
}
