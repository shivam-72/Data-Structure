#include<iostream>
using namespace std;
int main()
{
    int *a[3];//array of pointers IN STACK.
    a[0]=new int[4];//HERE 3 ARE IN HEAP NOW
    a[1]=new int[4];
    a[2]=new int[4];
    a[1][2]=15;
    cout<<a[1][2];
    return 0;
}