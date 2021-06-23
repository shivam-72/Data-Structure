#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
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
    reverse(a, n);
    return 0;
}