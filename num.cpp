#include<iostream>
using namespace std;
int number(int a){
    if(a>0){
        number(a-1);
        cout<<a;
    }
}
int main(){
    int n;
    cout<<"enter the no. :"<<endl;
    cin>>n;
    number(n);

    return 0;
}