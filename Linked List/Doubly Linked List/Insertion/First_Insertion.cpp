#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next,*prev;
};



/*----------Creation----------*/
void creation(node **head, int data){

    node *ptr=new node();

    ptr->data=data;
    ptr->next=NULL;
    ptr->prev=NULL;

    if(*head==NULL){
        *head=ptr;
    }
    else{
        node *temp=*head;

        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
    }
}
/*----------------------------*/



/*--------First Insertion------*/
void frstins(node **head, int value){

    node *ptr=new node();

    ptr->data=value;
    ptr->next=*head;
    ptr->prev=NULL;
    *head=ptr;

}
/*-----------------------------*/



/*-----------Display----------*/
void display(node **head){

    node *temp=*head;

    while(temp!=NULL){
        cout<<temp->data<<' ';
        temp=temp->next;
    }
    cout<<endl;
}
/*----------------------------*/



int main(){

    int n,data;
    node *head=NULL;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<endl;

    for(int i=1; i<=n; i++){
        cout<<"Enter "<<i<<"th element: ";
        cin>>data;
        cout<<endl;

        creation(&head,data);
    }

    cout<<"The elements are:"<<endl;
    display(&head);

    int value;
    cout<<"Enter the value you want to insert at the begining: ";
    cin>>value;
    cout<<endl;

    frstins(&head,value);

    cout<<"After first insertion the elements are:"<<endl;
    display(&head);

    return 0;
}
