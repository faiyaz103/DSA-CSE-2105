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



/*--------Last Insertion------*/
void lastins(node **head, int value){

    node *ptr=new node();

    ptr->data=value;
    ptr->next=NULL;
    
    node *temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev=temp;

}
/*-----------------------------*/



/*-------First Deletion-------*/
void frst_del(node **head){

    node *temp=*head;

    temp->next->prev=NULL;
    *head=temp->next;

    cout<<"Target deletion executed"<<endl;
}
/*----------------------------*/


/*-------Last Deletion-------*/
void last_del(node **head){

    node *temp=*head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;

    cout<<"Target deletion executed"<<endl;
}
/*----------------------------*/


/*------Target Deletion------*/
void target_del(node **head, int target){

    int flag=0;
    node *temp=*head;

    while(temp!=NULL && flag==0){
        if(temp->data==target){
            flag=1;

            if(temp->prev==NULL){
                return frst_del(head);
            }
            else if(temp->next==NULL){
                return last_del(head);
            }
            else{
                //node *proxy1=,*proxy2=;
                temp->next->prev=temp->prev;
                temp->prev->next=temp->next;
            }
        }
        else{
            temp=temp->next;
        }
    }

    if(flag==0){
        cout<<"Target element not found"<<endl;
    }
    else{
       cout<<"Target deletion executed"<<endl; 
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

    int target;

    cout<<"Enter the element you want to delete: ";
    cin>>target;
    cout<<endl;

    target_del(&head,target);
    cout<<"The elements are:"<<endl;
    display(&head);

    return 0;
}
