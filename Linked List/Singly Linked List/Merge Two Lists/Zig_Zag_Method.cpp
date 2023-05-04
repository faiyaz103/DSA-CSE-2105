//List 1: 2 4 5 8
//List 2: 3 7 9 34
//Output: 2 3 4 7 5 9 8 34
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



/*-----------Merging------------*/
void mrg(node **head1, node **head2){

    node *temp1=*head1,*temp2=*head2,*temp3;

    while(temp2!=NULL){
        temp3=temp2;
        temp2=temp2->link;
        temp3->link=temp1->link;
        temp1->link=temp3;
        temp1=temp1->link->link;
    }
    *head2=NULL;
}
/*-------------------------------*/



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
    node *head1=NULL,*head2=NULL;

    cout<<"Enter number of elements:"<<endl;
    cin>>n;

    cout<<"For first list"<<endl;
    for(int i=1; i<=n; i++){
        cout<<"Enter element number "<<i<<endl;
        cin>>data;
        creation(&head1, data);
    }
    cout<<"For second list"<<endl;
    for(int i=1; i<=n; i++){
        cout<<"Enter element number "<<i<<endl;
        cin>>data;
        creation(&head2, data);
    }

    cout<<"The Elements in first list are:"<<endl;
    display(&head1);
    cout<<"The Elements in first list are:"<<endl;
    display(&head2);

    mrg(&head1,&head2);
    cout<<"After Merging:"<<endl;
    display(&head1);

    return 0;
}
