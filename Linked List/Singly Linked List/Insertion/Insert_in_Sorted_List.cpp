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

void sorted_ins(node **head, int data){
    
    node *ptr=new node();
    ptr->data=data;
    ptr->link=NULL;
    
    int flag=0;
    
    node *temp=*head;
    
    if(data<(*head)->data){
        ptr->link=*head;
        *head=ptr;
        flag=1;
    }
    else{
        while(temp->link!=NULL && flag==0){
        if(data>=temp->data && data<temp->link->data){
            ptr->link=temp->link;
            temp->link=ptr;
            flag=1;
        }
        else{
            temp=temp->link;
        }
    }
    }
    
    if(flag==0){
        temp->link=ptr;
    }
}


void print(node **head){
    node *temp=*head;
    while(temp!=NULL){
        cout<<temp->data<<' ';
        temp=temp->link;
    }
    cout<<endl;
}


int main(){
    int n,data;
    node *head=NULL;
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>data;
        creation(&head,data);
    }
    
    print(&head);
    
    sorted_ins(&head, 3);
    
    print(&head);
    

    
    return 0;
}
