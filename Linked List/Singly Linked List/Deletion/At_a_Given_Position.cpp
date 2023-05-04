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


void del(node **head, int pos, int l){
    if(pos>l){
        cout<<"Invalid Position"<<endl;
    }
    else{
        node *temp=*head,*src;
        int i=0,flag=0;
        while(temp!=NULL && flag==0){
            if(i==pos){
                if(temp==*head){
                    *head=(*head)->link;
                    flag=1;
                }
                else{
                    src->link=temp->link;
                    flag=1;
                }
            }
            else{
                src=temp;
                temp=temp->link;
            }
            i++;
        }
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
    
    del(&head, 5, n-1);
    
    print(&head);
    

    
    return 0;
}
