#include <iostream>
using namespace std;

int arr[6]={0,1,2,3,4,5};
int front=1;
int rear=5;
int i;
int sizeOfQueue=sizeof(arr)/sizeof(arr[0]);

void Enqueue(int n){
    if((rear+1)%sizeOfQueue==front){
        cout<<"Queue is full"<<endl;
        return;
    } else{
        if(front==-1){
            front=0;
        }
        rear=(rear+1)%sizeOfQueue;
        arr[rear]=n;
    }
}

void Dequeue(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
        return;
    } else if(front==rear){
        front=-1;
        rear=-1;
    } else{
        front=(front+1)%sizeOfQueue;
    }
}


void Display(int a[]){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
        return;
    }
    i=front;
    int looper=5;
    while(looper=5){
        if(i==rear){
            cout<<a[i]<<" ";
            break;
        }
        cout<<a[i]<<" ";
        i=(i+1)%sizeOfQueue;
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
