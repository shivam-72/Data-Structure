#include <iostream>
using namespace std;
int get(int arr[], int n, int i)
{
    if (i >= 0 || i <= n)
    {
        return arr[i];
    }
    return -1; //-1 means index is invalid(i>n)
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
    int index;
    cout << "value of index : ";
    cin >> index;
    cout << get(a, n, index);
    return 0;
}