#include <iostream>  // transposition.
using namespace std; //move to front.

int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the size of array";
    cin >> n;
    int a[n];
    cout<<"enter the element of array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout<<"enter the key which u want to search";
    cin >> key;
    cout << linearsearch(a, n, key);

    return 0;
}