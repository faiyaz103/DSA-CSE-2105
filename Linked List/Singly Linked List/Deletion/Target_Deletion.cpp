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
void firstdel(node **head){

    *head=(*head)->link;
}
/*------------------------------*/



/*--------Last Deletion--------*/
void lastdel(node **head){
    
    node *temp=*head;
    
    while(temp->link->link!=NULL){
        temp=temp->link;
    }
    temp->link=NULL;
}
/*------------------------------*/



/*-------Target Deletion-------*/
void delt(node **head, int target){
    
    int flag=0;
    node *temp=*head;
    node *track=*head;
    while(temp!=NULL){
        
        if(temp->data==target){
            if(temp==(*head)){
                firstdel(head);
                return;
            }
            else if(temp->link==NULL){
                lastdel(head);
                return;
            }
            else{
                track->link=track->link->link;
                return;
            }
            flag=1;
        }
        else{
            track=temp;
            temp=temp->link;
        }
    }
    
    if(flag==0){
        cout<<"Target element not found"<<endl;
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

