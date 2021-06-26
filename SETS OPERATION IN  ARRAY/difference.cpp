// for sorted array
#include <iostream>
using namespace std;
void intersct(int a[], int n, int b[], int m)
{
    int c[n + m];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            j++;
        }
        else if (a[i] < b[j])
        {
            c[k++] = c[i++];
        }
        else
        {
            i++;
            j++;
        }
    }
    for (; i < n; i++)
    {
        c[k++] = c[i];
    }
    cout << "the intersected array is:";
    for (int l = 0; l < k; l++)
    {
        cout << c[l] << endl;
    }
}
int main()
{
    int n;
    cout << "enter size of array1" << endl;
    cin >> n;
    int a[n];
    cout << "fist array input" << endl;
    for (int i = 0; i < n; i++)

    {
        cin >> a[i];
    }
    int m;
    cout << "enter size of array2" << endl;
    cin >> m;
    int b[m];
    cout << "second array input" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    intersct(a, n, b, m);
    return 0;
}