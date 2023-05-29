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

void split(node **head, node **head2, int pos, int n){
    
    if(pos<=0 || pos>n-1){
        cout<<"Invalid Position"<<endl;
        return;
    }
    
    node *temp=*head, *track;
    int i=0;
    
    while(i<pos){
        track=temp;
        temp=temp->link;
        i++;
    }
    
    track->link=NULL;
    *head2=temp;
}



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
    node *head=NULL,*head2=NULL;
    
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>data;
        creation(&head, data);
    }

    display(&head);
    
    split(&head,&head2,5,n);
    
    display(&head);
    
    display(&head2);

    return 0;
}
