#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int l = 0;
    int h = n;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
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
    int key;
    cout << "enter the key :";
    cin >> key;
    cout << binarysearch(a, n, key);
    return 0;
}