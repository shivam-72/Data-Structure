#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "enter the size of array";
    cin >> n;
    int arr[n];
    cout << "enter the inputs";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr[0] = x;
    int flag;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > x)
        {
            x = arr[i];
            flag = 0;
        }
        else
        {
            cout << "unsorted";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "sorted";
    }
    return 0;
}