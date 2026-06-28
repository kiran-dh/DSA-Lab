#include <iostream>
using namespace std;

int arr[10]={1,2,3,4,5};
int front=0;
int rear=4;
int i;

void Enqueue(int n){
    if(rear==9){
        cout<<"Queue is full"<<endl;
    } else{
           if(front==-1){
               front=0;
           }
        rear++;
        arr[rear]=n;
    }
}

void Dequeue(){
    if(rear==-1){
        cout<<"Queue is empty"<<endl;
    } else{
        for(i=front;i<rear;i++){
            arr[i]=arr[i+1];
        }
        rear--;
    }
}

void Display(int a[]){
    for(i=front;i<=rear;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    cout<<"Initially Queue Looked Like This"<<endl;
    Display(arr);
    cout<<"After Enqueue"<<endl;
    Enqueue(6);
    Display(arr);
    cout<<"After Dequeue"<<endl;
    Dequeue();
    Dequeue();
    Display(arr);
    return 0;
}
