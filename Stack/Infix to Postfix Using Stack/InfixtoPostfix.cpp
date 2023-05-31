#include<bits/stdc++.h>
using namespace std;
const int mxsize=100;

/*-----------Implementation of Stack Using Array-----------*/
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
/*---------------------------------------------------------*/



/*-------------------Checking Precedence-------------------*/
int precheck(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return 0;
    }
}
/*---------------------------------------------------------*/



/*--------------------Infix to Postfix---------------------*/
void infixtopostfix(string s){

    Stack st;
    string res;

    for(int i=0; i<s.size(); i++){

        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]>='a' && s[i]<='z'){
            res+=s[i];
        }
        else if(s[i]==')'){
            while(st.peek()!='('){
                res+=st.peek();
                st.pop();
            }
            st.pop();
        }
        else{
            while(precheck(s[i])<=precheck(st.peek())){
                res+=st.peek();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    cout<<res<<endl;
    
}
/*---------------------------------------------------------*/



int main(){

    string s="(a+b*(c^d-e)^(f+g*h)-i)";

    infixtopostfix(s);

    return 0;

}
