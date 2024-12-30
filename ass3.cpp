#include <iostream>
using namespace std;
const int max_size = 5;
int arr[max_size];
int top =-1;
void push (int value){
    if(top<max_size-1){
        top++;
        arr[top]=value;
    }
    else{
        cout<< "Stack Ovreflow."<<endl;
    }
}
void pop(){
    if(top>-1){
        top--;
    }
    else{
        cout<<"Stack is Empty."<<endl;
    }
}
int peak() {
    if (top == -1) {
        cout << "Stack is Empty." << endl;
        return -1;  
    }
    return arr[top];
}
int main(){
    push(1);
    push(3);
    push(33);
    push(43);
    push(7);
   
     pop();
    int ele_top =peak();
    cout<<ele_top<<endl;

    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}