#include <iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-1)+ fib(n-2);
}

int main(){
    int n;
    cin>>n;
    //cout<<fib(n);
    for (int i = 0; i <= n; i++)
    {
        cout<<fib(i)<<" ";
    }
    
    
    return 0;
}
//When a function calls itself it is called recursion and the function which is
//  calling itself is called a recursive function. The recursive function consists 
//  of a base case and recursive condition. It is very important to add a base case in
//   recursive function otherwise recursive function will never stop executing.