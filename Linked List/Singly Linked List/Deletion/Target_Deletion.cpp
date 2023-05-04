//General Deletion
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *link;
};



/*-----------Creation-----------*/
void creation(node **head, int data){

    node *ptr = new node();

    ptr->data=data;
    ptr->link=NULL;

    if(*head==NULL){
        *head=ptr;
    }
    else{
        node *temp=*head;
        while(temp->link!=NULL){
            temp=temp->link;
        }
        temp->link=ptr;
    }
}
/*------------------------------*/



/*--------First Deletion--------*/
void first_del(node **head){

    *head=(*head)->link;
}
/*------------------------------*/



/*-------Target Deletion-------*/
void delt(node **head, int target){

    int flag=0;

    node *temp=*head;
    if(temp->data==target){
            flag=1;
        return first_del(head);
    }
    else{
        while(temp->link!=NULL){
            if(temp->link->data==target){
                temp->link=temp->link->link;
                flag=1;
                break;
            }
            else{
                temp=temp->link;
            }
        }
    }

    if(flag==0){
        cout<<"The element you want to delete is not present in the list"<<endl;
    }
}
/*------------------------------*/



/*-------Displaying List--------*/
void display(node **head){

    node *temp=*head;

    while(temp!=NULL){
        cout<<temp->data<<' ';
        temp=temp->link;
    }
    cout<<endl;
}
/*------------------------------*/



int main(){

    int n,data;
    node *head=NULL;

    cout<<"Enter number of elements:"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<"Enter element number "<<i<<endl;
        cin>>data;
        creation(&head, data);
    }

    cout<<"The Elements are:"<<endl;
    display(&head);

    int target;
    cout<<"Enter the element you want to delete: ";
    cin>>target;
    cout<<endl;

    delt(&head,target);
    cout<<"After deletion the Elements are:"<<endl;
    display(&head);

    return 0;
}

