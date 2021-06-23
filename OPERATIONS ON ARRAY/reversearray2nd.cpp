#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    int rev[n];
    cout << "enter the size of array";
    cin >> n;
    cout << "enter the element of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "original array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    cout << "reverse array is : " << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    return 0;
}