//Before Insertion
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
};



/*-------Creation--------*/
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
/*-----------------------*/



/*--------First Insertion------*/
void frstins(node **head, int value){

    node *ptr=new node();

    ptr->data=value;
    ptr->next=*head;
    ptr->prev=NULL;
    *head=ptr;

}
/*-----------------------------*/



/*-------Before Insertion------*/
void before_ins(node **head, int target, int value){

    int flag=0;

    node *temp=*head;

    while(temp!=NULL && flag==0){
        if(temp->data==target){
            flag=1;
            if(temp->prev==NULL){
                return frstins(head,value);
            }
            else{
                node *ptr=new node();

                ptr->data=value;
                ptr->next=temp;
                ptr->prev=temp->prev;
                temp->prev->next=ptr;
                temp->prev=ptr;

            }
        }
        else{
            temp=temp->next;
        }
    }

    if(flag==0){
        cout<<"Target element was not found!"<<endl;
    }
    else{
        cout<<"Before Insertion Executed"<<endl;
    }

}
/*---------------------------*/



/*-------Display---------*/
void display(node **head){

    node *temp=*head;

    while(temp!=NULL){
        cout<<temp->data<<' ';
        temp=temp->next;
    }

    cout<<endl;
}
/*-----------------------*/



int main(){

    int n,data;
    node *head=NULL;

    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<endl;

    for(int i=1; i<=n; i++){

        cout<<"Enter "<<i<<"'th element: ";
        cin>>data;
        cout<<endl;

        creation(&head,data);
    }

    cout<<"The elements are:"<<endl;
    display(&head);

    int target,value;

    cout<<"Enter the element before which you want to insert the value: ";
    cin>>target;
    cout<<endl;

    cout<<"Enter the value you want to insert: ";
    cin>>value;
    cout<<endl;

    before_ins(&head,target,value);
    cout<<"The elements are:"<<endl;
    display(&head);

    return 0;
}
