#include<bits/stdc++.h>
using namespace std;

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

void infixtopostfix(string s){

    stack<char> st;
    string res;

    for(int i=0; i<s.size(); i++){

        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]>='a' && s[i]<='z'){
            res+=s[i];
        }
        else if(s[i]==')'){
            while(st.top()!='('){
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(precheck(s[i])<=precheck(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    cout<<res<<endl;
    
}

int main(){

    string s="(a+b*(c^d-e)^(f+g*h)-i)";

    infixtopostfix(s);

    return 0;

}
