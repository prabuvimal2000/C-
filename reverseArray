#include <iostream>
using namespace std;

void reverseArray(int arr[],int size)
{
    int i,j;
    for(i=0,j=size-1;i<size/2;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    /*for(int i=size-1;i>=0;i--)
    {
       cout<<arr[i]<<" ";
    }*/
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() 
{
    int num,size;
    cin>>size;
    int arr[size];
    for(num=0;num<size;num++)
    {
        cin>>arr[num];
    }
    reverseArray(arr,size);
    return 0;
}
