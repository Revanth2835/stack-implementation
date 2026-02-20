#include <bits/stdc++.h>
using namespace std;

#define size 3
int myStack[size];
int top =-1;

void push(int a){
    if(top==size-1){
        cout<<"\nStack OverFlow"<<endl;
    }
    else{
        top++;
        myStack[top] = a;
    }
}
void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
       cout << "Deleted Element" << myStack[top]<<endl;
       top--;
    }
}

void peek(){
    if(top==-1){
        cout<<"Stack Is empty"<<endl;
    }
    else{
        cout<< "Top Element is: "<<myStack[top];
    }
}

void display(){
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout << "Stack Elements are:"<<endl;
        int i;
        for(i=0;i<=top;i++){
            cout<<myStack[i]<<endl;
        }
    }
}

int main(){
    int choice , element;

    while(1){
        cout<<"\nStack Operations"<<endl;
        cout<<"\n1.push\n2.pop\n3.peek\n4.display\n5.exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout <<"Enter Your Element:";
            cin>>element;
            push(element);
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            cout<<"Exiting Program"<<endl;
            return 0;
            default:
            cout<<"Invalid Operation"<<endl;
        }
    }
    return 0;
}