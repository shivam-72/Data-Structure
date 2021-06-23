#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int pos,size,num;
    cout<<"enter the size of array";
    cin>>size;
    if(size>=50){
        cout<<"overflow";
    }
    else{
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    cout<<"no. u want to insert";
    cin>>num;
    cout<<"position at which u want to enter";
    cin>>pos;
    for(int i=size-1;i>=pos-1;i--){
        arr[i+1]=arr[i];

    }
    arr[pos-1]=num;
    size++;
    if(pos<=0 || pos>size+1){
        cout<<"invalid";
    }
    else{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    }

    return 0;
}