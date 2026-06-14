#include <iostream>
using namespace std;

int arr[10]={1,2,3,4,5,6};
int n=6;

void insert(int pos, int value);
void Delete(int pos);
void display();

void insert(int pos, int value){
    if(n==10){
        cout<<"Array is full."<<endl;
        return;
    }
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    n=n+1;
}

void Delete(int pos){
    if (n==0){
        cout<<"Array is empty."<<endl;
        return;
    }
    for (int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

void display(){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}

int main() {
    cout<<"Initial array: ";
    display();

    insert(2,7);
    cout<<"After insertion:";
    display();

    Delete(3);
    cout<<"After deletion: ";
    display();

    return 0;
}
