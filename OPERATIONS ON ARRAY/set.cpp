#include <iostream>
using namespace std;
void set(int arr[], int n, int key, int x)
{
    cout << "before seting value";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << " after value set";
    if (key >= 0 || key <= n)
    {
        arr[key] = x;
        cout << "new array is";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
    }
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
    int x;
    cout << "enter the value of x";
    cin >> x;
    set(a, n, index, x);
    return 0;
}