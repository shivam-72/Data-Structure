#include <iostream>
using namespace std;
//arrays always call by reference.
void sumelements(int arr[], int size)
{ //we have to always pass the size of array because in array
    //it is passed as a pointer(int* a or int a [])
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        counter = counter + arr[i];
    }
    cout << counter;
}
int main()
{
    int a[] = {2, 3, 4, 5, 6, 7, 8};
    //size of array.= sizeof(a);
    int size;
    size = sizeof(a) / sizeof(a[0]); //No. of elements of array.
    sumelements(a, size);
    return 0;
}