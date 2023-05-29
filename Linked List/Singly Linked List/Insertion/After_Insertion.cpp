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



/*--------Last Insertion--------*/
void lastins(node **head, int value){

    node *ptr=new node();

    ptr->data=value;
    ptr->link=NULL;

    node *temp=*head;

    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=ptr;
}
/*------------------------------*/



/*--------After Insertion-------*/
void after_ins(node **head, int target, int value){

    int flag=0;

    node *ptr=new node();
    ptr->data=value;
    ptr->link=NULL;
    
    node *temp=*head;
    
    while(temp!=NULL){
        
        if(temp->data==target){
            if(temp->link==NULL){
                lastins(head,value);
                return;
            }
            else{
                ptr->link=temp->link;
                temp->link=ptr;
                return;
            }
            flag=1;
        }
        else{
            temp=temp->link;
        }
    }

    if(flag==0){
        cout<<"No target element found in the list"<<endl;
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

    cout<<"Before After Insertion the Elements are:"<<endl;
    display(&head);

    int target,value;

    cout<<"Enter the element after which value is to be inserted: ";
    cin>>target;
    cout<<"Enter the value you want to insert: ";
    cin>>value;
    cout<<endl;

    after_ins(&head,target,value);

    cout<<"After Insertion Executed:"<<endl;
    display(&head);

    return 0;
}
