#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *link; //To store the address of next node
};



/*---------Creating Linked List----------*/
void creation(node **head, int data){

    node *ptr=new node(); //Allocating space for a node

    ptr->data = data;
    ptr->link = NULL;

    if(*head == NULL){
        *head=ptr;
    }
    else{
         node *temp = *head;
         while(temp->link != NULL){
            temp = temp->link;
         }
         temp->link=ptr;
    }
}
/*----------------------------------------*/



/*---------------First Insertion-----------*/
void first_insert(node **head){

    int elem;
    cout<<"Enter the elemnt you want to insert at first: "<<endl;
    cin>>elem;

    node *ptr=new node(); //Allocating space for a node

    ptr->data=elem;
    ptr->link=*head; //Since present head is now second element

    *head=ptr; //New node is now head

}
/*-----------------------------------------*/



/*------------Displaying Elements---------*/
void display(node **head){

    node *ptr = *head;

    cout<<"The elements are: "<<endl;
    while(1){
        cout<<ptr->data<<' ';
        if(ptr->link==NULL){
            break;
        }
        else{
            ptr=ptr->link;
        }
    }

    cout<<endl;
}
/*----------------------------------------*/



int main(){

    int n,data;
    node *head=NULL; //To identify the address of first node

    cout<<"Enter number of elements: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter"<<' '<<i+1<<"th"<<' '<<"element"<<endl;
        cin>>data;

        creation(&head, data);
    }

    display(&head);

    first_insert(&head);
    cout<<"After first insertion"<<endl;
    display(&head);

    return 0;
}
