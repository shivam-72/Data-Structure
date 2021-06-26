#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int arr[50];
    cout << "enter the inputs";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "no. to be inserted :";
    cin >> x;
    for (int i = n - 1; i >= 0; i--)
    {
        if (x < arr[i])
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            arr[i + 1] = x;
            break;
        }
    }
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}