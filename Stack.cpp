#include <iostream>
using namespace std;

int top;
int arr[10]={1,2,3,4,5};

void push(int n){
    if(top==9){
        cout<<"stack is full"<<endl;
    } else {
        top++;
        arr[top]=n;
    }
}
void pop(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    } else{
        top--;
    }
}

void display(int a[]){
    for(int i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    top = 4;
    cout<<"initial array"<<endl;
    display(arr);
    push(6);
    cout<<"array after push"<<endl;
    display(arr);
    pop();
    cout<<"array after pop"<<endl;
    display(arr);
    return 0;
}
