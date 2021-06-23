#include<iostream>
using namespace std;
double taylor(double x, double n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
      r = taylor(x,n-1);
      p=p*x;
      f=f*n;
      return r+p/f;
      }

}
int main()
{
    double a,b;
    cin>>a>>b;
    cout<<taylor(a,b);
    
    return 0;
}