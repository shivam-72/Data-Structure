#include <iostream>
using namespace std;
int max(int a[], int size)
{
    int max;
    a[0] = max;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int a[n];
    cout << "enter the element of array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "the max no. among all is: ";
    cout << max(a, n);
    return 0;
}