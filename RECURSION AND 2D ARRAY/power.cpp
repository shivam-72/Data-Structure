#include<iostream>
using namespace std;
int powr(int a, int b){
    if (b==0){
        return 1;
    }
    return (powr(a,(b-1))* a) ;
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<powr(m,n);
    return 0;
}