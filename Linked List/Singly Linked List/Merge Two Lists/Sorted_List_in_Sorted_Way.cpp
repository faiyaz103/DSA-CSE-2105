#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *link;
};

void creation(node **head, int data){
    node *ptr=new node();
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

void sorted_mrg(node **head1, node **head2, node **head3){
    node *temp1=*head1, *temp2=*head2;

    while(temp1!=NULL || temp2!=NULL){

        if(temp1!=NULL && temp2!=NULL){
            if(temp1->data<temp2->data){
                creation(head3,temp1->data);
                temp1=temp1->link;
            }
            else{
                creation(head3,temp2->data);
                temp2=temp2->link;
            }
        }
        else if(temp1==NULL){
            creation(head3,temp2->data);
            temp2=temp2->link;
        }
        else if(temp2==NULL){
            creation(head3,temp1->data);
            temp1=temp1->link;
        }
    }
}

void display(node **head){
    node *temp=*head;
    while(temp!=NULL){
        cout<<temp->data<<' ';
        temp=temp->link;
    }
    cout<<endl;
}

int main(){
    int n,m,data;
    node *head1=NULL,*head2=NULL,*head3=NULL;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>data;

        creation(&head1, data);
    }

    cin>>m;
    for(int i=0; i<m; i++){
        cin>>data;

        creation(&head2, data);
    }

    display(&head1);
    display(&head2);

    sorted_mrg(&head1,&head2,&head3);

    display(&head3);

    return 0;
}
