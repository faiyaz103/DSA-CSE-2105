#include<bits/stdc++.h>
using namespace std;
const int mxsize=100;

class Stack{

    int top;
    int a[mxsize];

    public:

    Stack(){
        top=-1;
    }

    bool isfull(){

        if(top>=mxsize-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isempty(){

        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int value){

        if(isfull()){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top+=1;
            a[top]=value;
        }
    }

    void pop(){

        if(isempty()){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top-=1;
        }
    }

    int peek(){
        
        if(isempty()){
            cout<<"Stack is empty"<<endl;

            return -1;
        }

        return a[top];
    }

};

int main(){

    Stack st;

    st.pop();

    st.peek();

    st.push(5); 
    st.push(2);
    st.push(6);
    st.push(13);

    cout<<"Top element: "<<st.peek()<<endl;

    st.pop();

    cout<<"Top element: "<<st.peek()<<endl;

    return 0;
}
