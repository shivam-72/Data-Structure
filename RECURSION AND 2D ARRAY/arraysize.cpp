#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5];
    p[0] = 5;
    p[1] = 10;
    p[2] = 34;
    p[3] = 45;
    p[4] = 92;
    int *q = new int[10];
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
     delete []p;
    p = q;
    q = NULL;
   
    p[5] = 98;
    for (int i = 0; i < 15; i++)
    {
        cout << p[i] << endl;
    }
    return 0;
}