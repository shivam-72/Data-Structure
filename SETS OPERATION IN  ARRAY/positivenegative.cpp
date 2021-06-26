#include <iostream>
using namespace std;
void comparepn(int a[], int n, int b[], int m)
{
    int c[m + n];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            c[k++] = b[j++];
        }
        else
        {
            c[k++] = a[i++];
        }
    }
    for (; i < n; i++)
    {
        c[k++] = a[i];
    }
    for (; j < m; j++)
    {
        c[k++] = b[j];
    }
    cout << "merged array is" << endl;
    for (int p = 0; p < m + n; p++)
    {
        cout << c[p] << endl;
    }
}
int main()
{
    int n;
    cout << "enter the element of array" << endl;
    cin >> n;
    int a[n];
    cout << "fist input" << endl;
    for (int i = 0; i < n; i++)

    {
        cin >> a[i];
    }
    int m;
    cout << "enter element of 2nd array" << endl;
    cin >> m;
    int b[m];
    cout << "second input" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    comparepn(a, n, b, m);
    return 0;
}