#include <iostream>
using namespace std;
int main()
{
    int **A;
    A = new int *[3];//HERE ENTIRE STRUCTURE IS IN HEAP NOW.
    A[0] = new int[4];//EXCEPT DOUBLE POINTER **A.
    A[1] = new int[4];
    A[1] = new int[4];

    return 0;
}