#include <iostream>
using namespace std;

void hanoi(int disk, char src, char aux, char dst)
{
    if(disk==1)
    {
        cout<<"Move disk 1 from "<<src<<" to "<<dst<<endl;
        return;
    }
    hanoi(disk-1,src,dst,aux);
    cout<<"Move disk "<<disk<<" from "<<src<<" to "<<dst<<endl;
    hanoi(disk-1,aux,src,dst);
}

int main()
{
    int disk;
    cout<<"Enter no. of disks: ";
    cin>>disk;
    hanoi(disk,'A','B','C');
    return 0;
}
