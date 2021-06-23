#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int size;
    cout<<"enter the size of array";
    cin>>size;
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
        cout<<" ";
    }

    return 0;
}